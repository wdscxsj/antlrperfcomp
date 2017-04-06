import java.util.ArrayList;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;

public class CJ {
    public static void main(String[] args) throws Exception {
        CharStream source = CharStreams.fromFileName("input.c");
        CommonTokenStream tokens = new CommonTokenStream(new CLexer(source));
        ParseTree tree = new CParser(tokens).compilationUnit();
        new ParseTreeWalker().walk(new CBaseListener(), tree);
   }
}
