package main

import (
	"os"
	"runtime/pprof"

	"github.com/antlr/antlr4/runtime/Go/antlr"

	. "./go"  // antlr -Dlanguage=Go -o go C.g4
)

func main() {
	const (
		cpuprofile = "cpu.prof"
		memprofile = "mem.prof"
	)
	fcpu, _ := os.Create(cpuprofile)
	defer fcpu.Close()
	pprof.StartCPUProfile(fcpu)
	defer pprof.StopCPUProfile()
	fmem, _ := os.Create(memprofile)
	defer fmem.Close()
	defer pprof.WriteHeapProfile(fmem)

	source := antlr.NewFileStream("input.c")
	tokens := antlr.NewCommonTokenStream(NewCLexer(source), 0)
	tree := NewCParser(tokens).CompilationUnit()
	antlr.NewParseTreeWalker().Walk(new(BaseCListener), tree)
}
