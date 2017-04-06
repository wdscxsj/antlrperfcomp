#pragma once
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#pragma pack(push, 8)
        typedef unsigned __int64  uintptr_t;
        typedef char* va_list;
    void __va_start(va_list* , ...);
#pragma pack(pop)
    typedef unsigned __int64 size_t;
    typedef __int64          ptrdiff_t;
    typedef __int64          intptr_t;
    typedef _Bool __vcrt_bool;
    typedef unsigned short wchar_t;
    void __security_init_cookie(void);
        void __security_check_cookie(  uintptr_t _StackCookie);
        void __report_gsfailure(  uintptr_t _StackCookie);
extern uintptr_t __security_cookie;
    typedef _Bool __crt_bool;
 void _invalid_parameter_noinfo(void);
 void _invalid_parameter_noinfo_noreturn(void);
 void _invoke_watson(
      wchar_t const*,
      wchar_t const*,
      wchar_t const*,
            unsigned int,
            uintptr_t);
typedef int                           errno_t;
typedef unsigned short                wint_t;
typedef unsigned short                wctype_t;
typedef long                          __time32_t;
typedef __int64                       __time64_t;
typedef struct __crt_locale_data_public
{
      unsigned short const* _locale_pctype;
      int _locale_mb_cur_max;
               unsigned int _locale_lc_codepage;
} __crt_locale_data_public;
typedef struct __crt_locale_pointers
{
    struct __crt_locale_data*    locinfo;
    struct __crt_multibyte_data* mbcinfo;
} __crt_locale_pointers;
typedef __crt_locale_pointers* _locale_t; 
typedef struct _Mbstatet
{ 
    unsigned long _Wchar;
    unsigned short _Byte, _State;
} _Mbstatet;
typedef _Mbstatet mbstate_t;
        typedef __time64_t time_t;
    typedef size_t rsize_t;
#pragma once
     const unsigned short* __pctype_func(void);
     const wctype_t*       __pwctype_func(void);
   int iswalnum  (  wint_t _C);
   int iswalpha  (  wint_t _C);
   int iswascii  (  wint_t _C);
   int iswblank  (  wint_t _C);
   int iswcntrl  (  wint_t _C);
   int iswdigit  (  wint_t _C);
   int iswgraph  (  wint_t _C);
   int iswlower  (  wint_t _C);
   int iswprint  (  wint_t _C);
   int iswpunct  (  wint_t _C);
   int iswspace  (  wint_t _C);
   int iswupper  (  wint_t _C);
   int iswxdigit (  wint_t _C);
   int __iswcsymf(  wint_t _C);
   int __iswcsym (  wint_t _C);
   int _iswalnum_l (  wint_t _C,   _locale_t _Locale);
   int _iswalpha_l (  wint_t _C,   _locale_t _Locale);
   int _iswblank_l (  wint_t _C,   _locale_t _Locale);
   int _iswcntrl_l (  wint_t _C,   _locale_t _Locale);
   int _iswdigit_l (  wint_t _C,   _locale_t _Locale);
   int _iswgraph_l (  wint_t _C,   _locale_t _Locale);
   int _iswlower_l (  wint_t _C,   _locale_t _Locale);
   int _iswprint_l (  wint_t _C,   _locale_t _Locale);
   int _iswpunct_l (  wint_t _C,   _locale_t _Locale);
   int _iswspace_l (  wint_t _C,   _locale_t _Locale);
   int _iswupper_l (  wint_t _C,   _locale_t _Locale);
   int _iswxdigit_l(  wint_t _C,   _locale_t _Locale);
   int _iswcsymf_l (  wint_t _C,   _locale_t _Locale);
   int _iswcsym_l  (  wint_t _C,   _locale_t _Locale);
   wint_t towupper(  wint_t _C);
   wint_t towlower(  wint_t _C);
   int    iswctype(  wint_t _C,   wctype_t _Type);
   wint_t _towupper_l(  wint_t _C,   _locale_t _Locale);
   wint_t _towlower_l(  wint_t _C,   _locale_t _Locale);
   int    _iswctype_l(  wint_t _C,   wctype_t _Type,   _locale_t _Locale);
       int isleadbyte(  int _C);
       int _isleadbyte_l(  int _C,   _locale_t _Locale);
    int is_wctype(  wint_t _C,   wctype_t _Type);
   int _isctype(  int _C,   int _Type);
   int _isctype_l(  int _C,   int _Type,   _locale_t _Locale);
    int isalpha(  int _C);
   int _isalpha_l(  int _C,   _locale_t _Locale);
    int isupper(  int _C);
   int _isupper_l(  int _C,   _locale_t _Locale);
    int islower(  int _C);
   int _islower_l(  int _C,   _locale_t _Locale);
    int isdigit(  int _C);
   int _isdigit_l(  int _C,   _locale_t _Locale);
   int isxdigit(  int _C);
   int _isxdigit_l(  int _C,   _locale_t _Locale);
    int isspace(  int _C);
   int _isspace_l(  int _C,   _locale_t _Locale);
   int ispunct(  int _C);
   int _ispunct_l(  int _C,   _locale_t _Locale);
   int isblank(  int _C);
   int _isblank_l(  int _C,   _locale_t _Locale);
    int isalnum(  int _C);
   int _isalnum_l(  int _C,   _locale_t _Locale);
   int isprint(  int _C);
   int _isprint_l(  int _C,   _locale_t _Locale);
   int isgraph(  int _C);
   int _isgraph_l(  int _C,   _locale_t _Locale);
   int iscntrl(  int _C);
   int _iscntrl_l(  int _C,   _locale_t _Locale);
    int toupper(  int _C);
    int tolower(  int _C);
    int _tolower(  int _C);
   int _tolower_l(  int _C,   _locale_t _Locale);
    int _toupper(  int _C);
   int _toupper_l(  int _C,   _locale_t _Locale);
   int __isascii(  int _C);
   int __toascii(  int _C);
   int __iscsymf(  int _C);
   int __iscsym(  int _C);
         int ___mb_cur_max_func(void);
         int ___mb_cur_max_l_func(_locale_t);
    __inline __crt_locale_data_public* __acrt_get_locale_data_prefix(void const volatile* const _LocalePointers)
    {
        _locale_t const _TypedLocalePointers = (_locale_t)_LocalePointers;
        return (__crt_locale_data_public*)_TypedLocalePointers->locinfo;
    }
    __inline int _chvalidchk_l(
              int       const _C,
              int       const _Mask,
          _locale_t const _Locale
        )
    {
        if (_Locale)
        {
            return __acrt_get_locale_data_prefix(_Locale)->_locale_pctype[_C] & _Mask;
        }
        return (__pctype_func()[(_C)] & (_Mask));
    }
    __inline int _ischartype_l(
              int       const _C,
              int       const _Mask,
          _locale_t const _Locale
        )
    {
        if (_Locale && __acrt_get_locale_data_prefix(_Locale)->_locale_mb_cur_max > 1)
        {
            return _isctype_l(_C, _Mask, _Locale);
        }
        return _chvalidchk_l(_C, _Mask, _Locale);
    }
#pragma once
 unsigned int _clearfp(void);
#pragma warning(push)
#pragma warning(disable: 4141)
 unsigned int _controlfp(
      unsigned int _NewValue,
      unsigned int _Mask
    );
#pragma warning(pop)
 void _set_controlfp(
      unsigned int _NewValue,
      unsigned int _Mask
    );
 errno_t _controlfp_s(
      unsigned int* _CurrentState,
           unsigned int  _NewValue,
           unsigned int  _Mask
    );
 unsigned int _statusfp(void);
 void _fpreset(void);
 unsigned int _control87(
      unsigned int _NewValue,
      unsigned int _Mask
    );
 int* __fpecode(void);
 int __fpe_flt_rounds(void);
   double _copysign(  double _Number,   double _Sign);
   double _chgsign(  double _X);
   double _scalb(  double _X,   long _Y);
   double _logb(  double _X);
   double _nextafter(  double _X,   double _Y);
   int    _finite(  double _X);
   int    _isnan(  double _X);
   int    _fpclass(  double _X);
       float _scalbf(  float _X,   long _Y);
     void fpreset(void);
#pragma once
#pragma once
struct lconv
{
    char*    decimal_point;
    char*    thousands_sep;
    char*    grouping;
    char*    int_curr_symbol;
    char*    currency_symbol;
    char*    mon_decimal_point;
    char*    mon_thousands_sep;
    char*    mon_grouping;
    char*    positive_sign;
    char*    negative_sign;
    char     int_frac_digits;
    char     frac_digits;
    char     p_cs_precedes;
    char     p_sep_by_space;
    char     n_cs_precedes;
    char     n_sep_by_space;
    char     p_sign_posn;
    char     n_sign_posn;
    wchar_t* _W_decimal_point;
    wchar_t* _W_thousands_sep;
    wchar_t* _W_int_curr_symbol;
    wchar_t* _W_currency_symbol;
    wchar_t* _W_mon_decimal_point;
    wchar_t* _W_mon_thousands_sep;
    wchar_t* _W_positive_sign;
    wchar_t* _W_negative_sign;
};
 void _lock_locales(void);
 void _unlock_locales(void);
 int _configthreadlocale(
      int _Flag
    );
 char* setlocale(
            int         _Category,
      char const* _Locale
    );
 struct lconv* localeconv(void);
 _locale_t _get_current_locale(void);
 _locale_t _create_locale(
        int         _Category,
      char const* _Locale
    );
 void _free_locale(
      _locale_t _Locale
    );
 wchar_t* _wsetlocale(
            int            _Category,
      wchar_t const* _Locale
    );
 _locale_t _wcreate_locale(
        int            _Category,
      wchar_t const* _Locale
    );
 wchar_t**    ___lc_locale_name_func(void);
 unsigned int ___lc_codepage_func   (void);
 unsigned int ___lc_collate_cp_func (void);
#pragma once
 int* _errno(void);
 errno_t _set_errno(  int _Value);
 errno_t _get_errno(  int* _Value);
 extern unsigned long  __threadid(void);
 extern uintptr_t __threadhandle(void);
#pragma once
#pragma once
#pragma once
unsigned __int64* __local_stdio_printf_options(void)
{
    static unsigned __int64 _OptionsStorage;
    return &_OptionsStorage;
}
unsigned __int64* __local_stdio_scanf_options(void)
{
    static unsigned __int64 _OptionsStorage;
    return &_OptionsStorage;
}
    typedef struct _iobuf
    {
        void* _Placeholder;
    } FILE;
 FILE* __acrt_iob_func(unsigned);
 wint_t fgetwc(
      FILE* _Stream
    );
 wint_t _fgetwchar(void);
 wint_t fputwc(
         wchar_t _Character,
      FILE*   _Stream);
 wint_t _fputwchar(
      wchar_t _Character
    );
 wint_t getwc(
      FILE* _Stream
    );
 wint_t getwchar(void);
 wchar_t* fgetws(
      wchar_t* _Buffer,
                              int      _BufferCount,
                           FILE*    _Stream
    );
 int fputws(
       wchar_t const* _Buffer,
      FILE*          _Stream
    );
 wchar_t* _getws_s(
      wchar_t* _Buffer,
                              size_t   _BufferCount
    );
 wint_t putwc(
         wchar_t _Character,
      FILE*   _Stream
    );
 wint_t putwchar(
      wchar_t _Character
    );
 int _putws(
      wchar_t const* _Buffer
    );
 wint_t ungetwc(
         wint_t _Character,
      FILE*  _Stream
    );
 FILE * _wfdopen(
        int            _FileHandle,
      wchar_t const* _Mode
    );
 FILE* _wfopen(
      wchar_t const* _FileName,
      wchar_t const* _Mode
    );
 errno_t _wfopen_s(
      FILE**         _Stream,
                         wchar_t const* _FileName,
                         wchar_t const* _Mode
    );
 FILE* _wfreopen(
       wchar_t const* _FileName,
       wchar_t const* _Mode,
      FILE*          _OldStream
    );
 errno_t _wfreopen_s(
      FILE**         _Stream,
                         wchar_t const* _FileName,
                         wchar_t const* _Mode,
                        FILE*          _OldStream
    );
 FILE* _wfsopen(
      wchar_t const* _FileName,
      wchar_t const* _Mode,
        int            _ShFlag
    );
 void _wperror(
      wchar_t const* _ErrorMessage
    );
     FILE* _wpopen(
          wchar_t const* _Command,
          wchar_t const* _Mode
        );
 int _wremove(
      wchar_t const* _FileName
    );
 wchar_t* _wtempnam(
      wchar_t const* _Directory,
      wchar_t const* _FilePrefix
    );
 errno_t _wtmpnam_s(
      wchar_t* _Buffer,
                              size_t   _BufferCount
    );
   wchar_t* _wtmpnam(  wchar_t *_Buffer);
 wint_t _fgetwc_nolock(
      FILE* _Stream
    );
 wint_t _fputwc_nolock(
         wchar_t _Character, 
      FILE*   _Stream
    );
 wint_t _getwc_nolock(
      FILE* _Stream
    );
 wint_t _putwc_nolock(
         wchar_t _Character,
      FILE*   _Stream
    );
 wint_t _ungetwc_nolock(
         wint_t _Character,
      FILE*  _Stream
    );
 int __stdio_common_vfwprintf(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
 int __stdio_common_vfwprintf_s(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
 int __stdio_common_vfwprintf_p(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
__inline int _vfwprintf_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    return __stdio_common_vfwprintf((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}
__inline int vfwprintf(
                            FILE*          const _Stream,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )
{
    return _vfwprintf_l(_Stream, _Format, ((void *)0), _ArgList);
}
__inline int _vfwprintf_s_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    return __stdio_common_vfwprintf_s((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}
    __inline int vfwprintf_s(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    {
        return _vfwprintf_s_l(_Stream, _Format, ((void *)0), _ArgList);
    }
__inline int _vfwprintf_p_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    return __stdio_common_vfwprintf_p((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}
__inline int _vfwprintf_p(
                            FILE*          const _Stream,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )
{
    return _vfwprintf_p_l(_Stream, _Format, ((void *)0), _ArgList);
}
__inline int _vwprintf_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    return _vfwprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}
__inline int vwprintf(
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )
{
    return _vfwprintf_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
}
__inline int _vwprintf_s_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}
    __inline int vwprintf_s(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    {
        return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    }
__inline int _vwprintf_p_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    return _vfwprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}
__inline int _vwprintf_p(
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )
{
    return _vfwprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
}
__inline int _fwprintf_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int fwprintf(
                            FILE*          const _Stream,
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfwprintf_l(_Stream, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _fwprintf_s_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int fwprintf_s(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfwprintf_s_l(_Stream, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
__inline int _fwprintf_p_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _fwprintf_p(
                            FILE*          const _Stream,
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfwprintf_p_l(_Stream, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _wprintf_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfwprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int wprintf(
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfwprintf_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _wprintf_s_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int wprintf_s(
            wchar_t const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
__inline int _wprintf_p_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfwprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _wprintf_p(
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfwprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
 int __stdio_common_vfwscanf(
                                        unsigned __int64 _Options,
                                     FILE*            _Stream,
        wchar_t const*   _Format,
                                    _locale_t        _Locale,
                                           va_list          _ArgList
    );
__inline int _vfwscanf_l(
      FILE*                                const _Stream,
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )
{
    return __stdio_common_vfwscanf(
        (*__local_stdio_scanf_options ()),
        _Stream, _Format, _Locale, _ArgList);
}
__inline int vfwscanf(
      FILE*                                const _Stream,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )
{
    return _vfwscanf_l(_Stream, _Format, ((void *)0), _ArgList);
}
__inline int _vfwscanf_s_l(
                            FILE*          const _Stream,
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )
{
    return __stdio_common_vfwscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Stream, _Format, _Locale, _ArgList);
}
    __inline int vfwscanf_s(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    {
        return _vfwscanf_s_l(_Stream, _Format, ((void *)0), _ArgList);
    }
__inline int _vwscanf_l(
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )
{
    return _vfwscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
}
__inline int vwscanf(
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )
{
    return _vfwscanf_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
}
__inline int _vwscanf_s_l(
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )
{
    return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
}
    __inline int vwscanf_s(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    {
        return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
    }
__inline int _fwscanf_l(
                                     FILE*          const _Stream,
        wchar_t const* const _Format,
                                    _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int fwscanf(
                           FILE*          const _Stream,
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfwscanf_l(_Stream, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _fwscanf_s_l(
                                       FILE*          const _Stream,
        wchar_t const* const _Format,
                                      _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int fwscanf_s(
                                 FILE*          const _Stream,
            wchar_t const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfwscanf_s_l(_Stream, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
__inline int _wscanf_l(
        wchar_t const* const _Format,
                                    _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfwscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int wscanf(
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfwscanf_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _wscanf_s_l(
        wchar_t const* const _Format,
                                      _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int wscanf_s(
            wchar_t const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
 int __stdio_common_vswprintf(
                                         unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                         size_t           _BufferCount,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
 int __stdio_common_vswprintf_s(
                                         unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                         size_t           _BufferCount,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
 int __stdio_common_vsnwprintf_s(
                                         unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                         size_t           _BufferCount,
                                         size_t           _MaxCount,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
 int __stdio_common_vswprintf_p(
                                         unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                         size_t           _BufferCount,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
__inline int _vsnwprintf_l(
           wchar_t*       const _Buffer,
                                             size_t         const _BufferCount,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
    )
{
    int const _Result = __stdio_common_vswprintf(
        (*__local_stdio_printf_options()) | (1ULL << 0),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
#pragma warning(push)
#pragma warning(disable: 4793)
__inline int _vsnwprintf_s_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
                                         size_t         const _MaxCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    int const _Result = __stdio_common_vsnwprintf_s(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vsnwprintf_s(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
                               size_t         const _MaxCount,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )
{
    return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
}
 __inline   int _snwprintf(    wchar_t *_Buffer,   size_t _BufferCount,     wchar_t const* _Format, ...);  __inline   int _vsnwprintf(    wchar_t *_Buffer,   size_t _BufferCount,     wchar_t const* _Format, va_list _Args);
#pragma warning(pop)
__inline int _vsnwprintf(
        wchar_t*       _Buffer,
                                          size_t         _BufferCount,
                   wchar_t const* _Format,
                                             va_list        _ArgList
    )
{
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    return _vsnwprintf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    #pragma warning(pop)
}
__inline int _vswprintf_c_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    int const _Result = __stdio_common_vswprintf(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vswprintf_c(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )
{
    return _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}
__inline int _vswprintf_l(
                         wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    #pragma warning(pop)
}
__inline int __vswprintf_l(
                         wchar_t*       const _Buffer,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    return _vswprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}
__inline int _vswprintf(
               wchar_t*       const _Buffer,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )
{
    return _vswprintf_l(_Buffer, (size_t)-1, _Format, ((void *)0), _ArgList);
}
__inline int vswprintf(
                         wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                            va_list              _ArgList
    )
{
    return _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}
__inline int _vswprintf_s_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    int const _Result = __stdio_common_vswprintf_s(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
    __inline int vswprintf_s(
           wchar_t*       const _Buffer,
                                   size_t         const _BufferCount,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    {
        return _vswprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    }
__inline int _vswprintf_p_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    int const _Result = __stdio_common_vswprintf_p(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vswprintf_p(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )
{
    return _vswprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}
__inline int _vscwprintf_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    int const _Result = __stdio_common_vswprintf(
        (*__local_stdio_printf_options()) | (1ULL << 1),
        ((void *)0), 0, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vscwprintf(
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )
{
    return _vscwprintf_l(_Format, ((void *)0), _ArgList);
}
__inline int _vscwprintf_p_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )
{
    int const _Result = __stdio_common_vswprintf_p(
        (*__local_stdio_printf_options()) | (1ULL << 1),
        ((void *)0), 0, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vscwprintf_p(
        wchar_t const* const _Format, 
                                  va_list              _ArgList
    )
{
    return _vscwprintf_p_l(_Format, ((void *)0), _ArgList);
}
__inline int __swprintf_l(
                         wchar_t*       const _Buffer,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _swprintf_l(
                         wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _swprintf(
               wchar_t*       const _Buffer,
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = __vswprintf_l(_Buffer, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int swprintf(
               wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
#pragma warning(push)
#pragma warning(disable:4793 4996)
 __inline   int __swprintf_l(    wchar_t *_Buffer,     wchar_t const* _Format,   _locale_t _Locale, ...);  __inline   int __vswprintf_l(    wchar_t *_Buffer,     wchar_t const* _Format,   _locale_t _Locale, va_list _Args);
 __inline   int _swprintf(    wchar_t *_Buffer,     wchar_t const* _Format, ...);  __inline   int _vswprintf(    wchar_t *_Buffer,     wchar_t const* _Format, va_list _Args);
#pragma warning(pop)
__inline int _swprintf_s_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int swprintf_s(
           wchar_t*       const _Buffer,
                                   size_t         const _BufferCount,
            wchar_t const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
__inline int _swprintf_p_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _swprintf_p(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _swprintf_c_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _swprintf_c(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snwprintf_l(
        wchar_t*       const _Buffer,
                                          size_t         const _BufferCount,
         wchar_t const* const _Format,
                                      _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    #pragma warning(pop)
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snwprintf(
        wchar_t*       _Buffer,
                                          size_t         _BufferCount,
                   wchar_t const* _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    #pragma warning(pop)
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snwprintf_s_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
                                         size_t         const _MaxCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snwprintf_s(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
                               size_t         const _MaxCount,
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _scwprintf_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vscwprintf_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _scwprintf(
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vscwprintf_l(_Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _scwprintf_p_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vscwprintf_p_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _scwprintf_p(
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vscwprintf_p_l(_Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    #pragma warning(push)
    #pragma warning(disable: 4141 4412 4793 4996 6054)
    #pragma warning(pop)
 int __stdio_common_vswscanf(
                                        unsigned __int64 _Options,
              wchar_t const*   _Buffer,
                                        size_t           _BufferCount,
        wchar_t const*   _Format,
                                    _locale_t        _Locale,
                                           va_list          _ArgList
    );
__inline int _vswscanf_l(
                             wchar_t const* const _Buffer,
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )
{
    return __stdio_common_vswscanf(
        (*__local_stdio_scanf_options ()),
        _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}
__inline int vswscanf(
                             wchar_t const* _Buffer,
        wchar_t const* _Format,
                                  va_list        _ArgList
    )
{
    return _vswscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
}
__inline int _vswscanf_s_l(
                             wchar_t const* const _Buffer,
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )
{
    return __stdio_common_vswscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}
    __inline int vswscanf_s(
                                 wchar_t const* const _Buffer,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    {
        return _vswscanf_s_l(_Buffer, _Format, ((void *)0), _ArgList);
    }
__inline int _vsnwscanf_l(
              wchar_t const* const _Buffer,
                                        size_t         const _BufferCount,
        wchar_t const* const _Format,
                                    _locale_t      const _Locale,
                                           va_list              _ArgList
    )
{
    return __stdio_common_vswscanf(
        (*__local_stdio_scanf_options ()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
}
__inline int _vsnwscanf_s_l(
                wchar_t const* const _Buffer,
                                          size_t         const _BufferCount,
        wchar_t const* const _Format,
                                      _locale_t      const _Locale,
                                             va_list              _ArgList
    )
{
    return __stdio_common_vswscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
}
__inline int _swscanf_l(
                                      wchar_t const* const _Buffer,
        wchar_t const* const _Format,
                                    _locale_t            _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int swscanf(
                            wchar_t const* const _Buffer,
        wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vswscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _swscanf_s_l(
                                        wchar_t const* const _Buffer,
        wchar_t const* const _Format,
                                      _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int swscanf_s(
                                  wchar_t const* const _Buffer,
            wchar_t const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vswscanf_s_l(_Buffer, _Format, ((void *)0), _ArgList);  
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
__inline int _snwscanf_l(
              wchar_t const* const _Buffer,
                                        size_t         const _BufferCount,
        wchar_t const* const _Format,
                                    _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    #pragma warning(pop)
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snwscanf(
        wchar_t const* const _Buffer,
                                  size_t         const _BufferCount,
            wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    #pragma warning(pop)
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snwscanf_s_l(
                wchar_t const* const _Buffer,
                                          size_t         const _BufferCount,
        wchar_t const* const _Format,
                                      _locale_t      const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snwscanf_s(
         wchar_t const* const _Buffer,
                                   size_t         const _BufferCount,
           wchar_t const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
typedef __int64 fpos_t;
 errno_t _get_stream_buffer_pointers(
           FILE*   _Stream,
      char*** _Base,
      char*** _Pointer,
      int**   _Count
    );
     errno_t clearerr_s(
          FILE* _Stream
        );
     errno_t fopen_s(
          FILE**      _Stream,
                             char const* _FileName,
                             char const* _Mode
        );
     size_t fread_s(
            void*  _Buffer,
                       size_t _BufferSize,
                                                                        size_t _ElementSize,
                                                                        size_t _ElementCount,
                                                                     FILE*  _Stream
        );
     errno_t freopen_s(
          FILE**      _Stream,
                             char const* _FileName,
                             char const* _Mode,
                            FILE*       _OldStream
        );
     char* gets_s(
          char*   _Buffer,
                           rsize_t _Size
        );
     errno_t tmpfile_s(
            FILE** _Stream
        );
     errno_t tmpnam_s(
          char*   _Buffer,
                           rsize_t _Size
        );
 void clearerr(
      FILE* _Stream
    );
 int fclose(
      FILE* _Stream
    );
 int _fcloseall(void);
 FILE* _fdopen(
        int         _FileHandle,
      char const* _Mode
    );
 int feof(
      FILE* _Stream
    );
 int ferror(
      FILE* _Stream
    );
 int fflush(
      FILE* _Stream
    );
 int fgetc(
      FILE* _Stream
    );
 int _fgetchar(void);
 int fgetpos(
      FILE*   _Stream,
        fpos_t* _Position
    );
 char* fgets(
      char* _Buffer,
                           int   _MaxCount,
                        FILE* _Stream
    );
 int _fileno(
      FILE* _Stream
    );
 int _flushall(void);
 FILE* fopen(
      char const* _FileName,
      char const* _Mode
    );
 int fputc(
         int   _Character,
      FILE* _Stream
    );
 int _fputchar(
      int _Character
    );
 int fputs(
       char const* _Buffer,
      FILE*       _Stream
    );
 size_t fread(
      void*  _Buffer,
                                                  size_t _ElementSize,
                                                  size_t _ElementCount,
                                               FILE*  _Stream
    );
 FILE* freopen(
       char const* _FileName,
       char const* _Mode,
      FILE*       _Stream
    );
 FILE* _fsopen(
      char const* _FileName,
      char const* _Mode,
        int         _ShFlag
    );
 int fsetpos(
      FILE*         _Stream,
         fpos_t const* _Position
    );
 int fseek(
      FILE* _Stream,
         long  _Offset,
         int   _Origin
    );
 int _fseeki64(
      FILE*   _Stream,
         __int64 _Offset,
         int     _Origin
    );
 long ftell(
      FILE* _Stream
    );
 __int64 _ftelli64(
      FILE* _Stream
    );
 size_t fwrite(
      void const* _Buffer,
                                                size_t      _ElementSize,
                                                size_t      _ElementCount,
                                             FILE*       _Stream
    );
 int getc(
      FILE* _Stream
    );
 int getchar(void);
 int _getmaxstdio(void);
 int _getw(
      FILE* _Stream
    );
 void perror(
      char const* _ErrorMessage
    );
     int _pclose(
          FILE* _Stream
        );
     FILE* _popen(
          char const* _Command,
          char const* _Mode
        );
 int putc(
         int   _Character,
      FILE* _Stream
    );
 int putchar(
      int _Character
    );
 int puts(
      char const* _Buffer
    );
 int _putw(
         int   _Word, 
      FILE* _Stream
    );
 int remove(
      char const* _FileName
    );
 int rename(
      char const* _OldFileName,
      char const* _NewFileName
    );
 int _unlink(
      char const* _FileName
    );
     int unlink(
          char const* _FileName
        );
 void rewind(
      FILE* _Stream
    );
 int _rmtmp(void);
 void setbuf(
                                                  FILE* _Stream,
        char* _Buffer
    );
 int _setmaxstdio(
      int _Maximum
    );
 int setvbuf(
                           FILE*  _Stream,
        char*  _Buffer,
                              int    _Mode,
                              size_t _Size
    );
 char* _tempnam(
      char const* _DirectoryName,
      char const* _FilePrefix
    );
 FILE* tmpfile(void);
   char* tmpnam(  char *_Buffer);
 int ungetc(
         int   _Character,
      FILE* _Stream
    );
 void _lock_file(
      FILE* _Stream
    );
 void _unlock_file(
      FILE* _Stream
    );
 int _fclose_nolock(
      FILE* _Stream
    );
 int _fflush_nolock(
      FILE* _Stream
    );
 int _fgetc_nolock(
      FILE* _Stream
    );
 int _fputc_nolock(
         int   _Character,
      FILE* _Stream
    );
 size_t _fread_nolock(
      void*  _Buffer,
                                                  size_t _ElementSize,
                                                  size_t _ElementCount,
                                               FILE*  _Stream
    );
 size_t _fread_nolock_s(
      void*  _Buffer,
               size_t _BufferSize,
                                                                  size_t _ElementSize,
                                                                  size_t _ElementCount,
                                                               FILE*  _Stream
    );
 int _fseek_nolock(
      FILE* _Stream,
         long  _Offset,
         int   _Origin
    );
 int _fseeki64_nolock(
      FILE*   _Stream,
         __int64 _Offset,
         int     _Origin
    );
 long _ftell_nolock(
      FILE* _Stream
    );
 __int64 _ftelli64_nolock(
      FILE* _Stream
    );
 size_t _fwrite_nolock(
      void const* _Buffer,
                                                size_t      _ElementSize,
                                                size_t      _ElementCount,
                                             FILE*       _Stream
    );
 int _getc_nolock(
      FILE* _Stream
    );
 int _putc_nolock(
         int   _Character,
      FILE* _Stream
    );
 int _ungetc_nolock(
         int   _Character,
      FILE* _Stream
    );
 int* __p__commode(void);
 int __stdio_common_vfprintf(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
 int __stdio_common_vfprintf_s(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
 int __stdio_common_vfprintf_p(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
__inline int _vfprintf_l(
       FILE*       const _Stream,
        char const* const _Format,
      _locale_t   const _Locale,
             va_list           _ArgList
    )
{
    return __stdio_common_vfprintf((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}
__inline int vfprintf(
                            FILE*       const _Stream,
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vfprintf_l(_Stream, _Format, ((void *)0), _ArgList);
}
__inline int _vfprintf_s_l(
       FILE*       const _Stream,
        char const* const _Format,
      _locale_t   const _Locale,
             va_list           _ArgList
    )
{
    return __stdio_common_vfprintf_s((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}
    __inline int vfprintf_s(
                                FILE*       const _Stream,
            char const* const _Format,
                                      va_list           _ArgList
        )
    {
        return _vfprintf_s_l(_Stream, _Format, ((void *)0), _ArgList);
    }
__inline int _vfprintf_p_l(
       FILE*       const _Stream,
        char const* const _Format,
      _locale_t   const _Locale,
             va_list           _ArgList
    )
{
    return __stdio_common_vfprintf_p((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}
__inline int _vfprintf_p(
                            FILE*       const _Stream,
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vfprintf_p_l(_Stream, _Format, ((void *)0), _ArgList);
}
__inline int _vprintf_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )
{
    return _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}
__inline int vprintf(
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vfprintf_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
}
__inline int _vprintf_s_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )
{
    return _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}
    __inline int vprintf_s(
            char const* const _Format,
                                      va_list           _ArgList
        )
    {
        return _vfprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    }
__inline int _vprintf_p_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )
{
    return _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}
__inline int _vprintf_p(
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vfprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
}
__inline int _fprintf_l(
                                      FILE*       const _Stream,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int fprintf(
                            FILE*       const _Stream,
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfprintf_l(_Stream, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
 int _set_printf_count_output(
      int _Value
    );
 int _get_printf_count_output(void);
__inline int _fprintf_s_l(
                                      FILE*       const _Stream,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int fprintf_s(
                                FILE*       const _Stream,
            char const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfprintf_s_l(_Stream, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
__inline int _fprintf_p_l(
                                      FILE*       const _Stream,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _fprintf_p(
                            FILE*       const _Stream,
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfprintf_p_l(_Stream, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _printf_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int printf(
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfprintf_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _printf_s_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int printf_s(
            char const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
__inline int _printf_p_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _printf_p(
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
 int __stdio_common_vfscanf(
                                        unsigned __int64 _Options,
                                     FILE*            _Stream,
        char const*      _Format,
                                    _locale_t        _Locale,
                                           va_list          _Arglist
    );
__inline int _vfscanf_l(
                            FILE*       const _Stream,
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )
{
    return __stdio_common_vfscanf(
        (*__local_stdio_scanf_options ()),
        _Stream, _Format, _Locale, _ArgList);
}
__inline int vfscanf(
                            FILE*       const _Stream,
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vfscanf_l(_Stream, _Format, ((void *)0), _ArgList);
}
__inline int _vfscanf_s_l(
                            FILE*       const _Stream,
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )
{
    return __stdio_common_vfscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Stream, _Format, _Locale, _ArgList);
}
    __inline int vfscanf_s(
                                FILE*       const _Stream,
            char const* const _Format,
                                      va_list           _ArgList
        )
    {
        return _vfscanf_s_l(_Stream, _Format, ((void *)0), _ArgList);
    }
__inline int _vscanf_l(
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )
{
    return _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
}
__inline int vscanf(
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vfscanf_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
}
__inline int _vscanf_s_l(
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )
{
    return _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
}
    __inline int vscanf_s(
            char const* const _Format,
                                      va_list           _ArgList
        )
    {
        return _vfscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
    }
__inline int _fscanf_l(
                                     FILE*       const _Stream,
        char const* const _Format,
                                    _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int fscanf(
                           FILE*       const _Stream,
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfscanf_l(_Stream, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _fscanf_s_l(
                                       FILE*       const _Stream,
        char const* const _Format,
                                      _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int fscanf_s(
                                 FILE*       const _Stream,
            char const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfscanf_s_l(_Stream, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
__inline int _scanf_l(
        char const* const _Format,
                                    _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int scanf(
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vfscanf_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _scanf_s_l(
        char const* const _Format,
                                      _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int scanf_s(
            char const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
 int __stdio_common_vsprintf(
                                         unsigned __int64 _Options,
                 char*            _Buffer,
                                         size_t           _BufferCount,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
 int __stdio_common_vsprintf_s(
                                         unsigned __int64 _Options,
                 char*            _Buffer,
                                         size_t           _BufferCount,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
 int __stdio_common_vsnprintf_s(
                                         unsigned __int64 _Options,
                 char*            _Buffer,
                                         size_t           _BufferCount,
                                         size_t           _MaxCount,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
 int __stdio_common_vsprintf_p(
                                         unsigned __int64 _Options,
                 char*            _Buffer,
                                         size_t           _BufferCount,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );
__inline int _vsnprintf_l(
                   char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )
{
    int const _Result = __stdio_common_vsprintf(
        (*__local_stdio_printf_options()) | (1ULL << 0),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vsnprintf(
        char*       const _Buffer,
                                          size_t      const _BufferCount,
                   char const* const _Format,
                                             va_list           _ArgList
    )
{
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    return _vsnprintf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    #pragma warning(pop)
}
__inline int vsnprintf(
         char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    int const _Result = __stdio_common_vsprintf(
        (*__local_stdio_printf_options()) | (1ULL << 1),
        _Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vsprintf_l(
        char*       const _Buffer,
                      char const* const _Format,
                    _locale_t   const _Locale,
                           va_list           _ArgList
    )
{
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    return _vsnprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    #pragma warning(pop)
}
__inline int vsprintf(
               char*       const _Buffer,
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    return _vsnprintf_l(_Buffer, (size_t)-1, _Format, ((void *)0), _ArgList);
    #pragma warning(pop)
}
__inline int _vsprintf_s_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )
{
    int const _Result = __stdio_common_vsprintf_s(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
    __inline int vsprintf_s(
           char*       const _Buffer,
                                   size_t      const _BufferCount,
            char const* const _Format,
                                      va_list           _ArgList
        )
    {
        return _vsprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    }
__inline int _vsprintf_p_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )
{
    int const _Result = __stdio_common_vsprintf_p(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vsprintf_p(
       char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vsprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}
__inline int _vsnprintf_s_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
                                         size_t      const _MaxCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list          _ArgList
    )
{
    int const _Result = __stdio_common_vsnprintf_s(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vsnprintf_s(
       char*       const _Buffer,
                               size_t      const _BufferCount,
                               size_t      const _MaxCount,
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
}
    __inline int vsnprintf_s(
           char*       const _Buffer,
                                   size_t      const _BufferCount,
                                   size_t      const _MaxCount,
            char const* const _Format,
                                      va_list           _ArgList
        )
    {
        return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
    }
__inline int _vscprintf_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )
{
    int const _Result = __stdio_common_vsprintf(
        (*__local_stdio_printf_options()) | (1ULL << 1),
        ((void *)0), 0, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vscprintf(
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vscprintf_l(_Format, ((void *)0), _ArgList);
}
__inline int _vscprintf_p_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )
{
    int const _Result = __stdio_common_vsprintf_p(
        (*__local_stdio_printf_options()) | (1ULL << 1),
        ((void *)0), 0, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vscprintf_p(
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vscprintf_p_l(_Format, ((void *)0), _ArgList);
}
__inline int _vsnprintf_c_l(
                   char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )
{
    int const _Result = __stdio_common_vsprintf(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    return _Result < 0 ? -1 : _Result;
}
__inline int _vsnprintf_c(
         char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
}
__inline int _sprintf_l(
                         char*       const _Buffer,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList);
    #pragma warning(pop)
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int sprintf(
               char*       const _Buffer,
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsprintf_l(_Buffer, _Format, ((void *)0), _ArgList);
    #pragma warning(pop)
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
#pragma warning(push)
#pragma warning(disable: 4996)
   int sprintf(  char *_Buffer,  char const* _Format, ...);    int vsprintf(  char *_Buffer,  char const* _Format, va_list _Args);
#pragma warning(pop)
__inline int _sprintf_s_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int sprintf_s(
           char*       const _Buffer,
                                   size_t      const _BufferCount,
            char const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
__inline int _sprintf_p_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _sprintf_p(
       char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snprintf_l(
                   char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    #pragma warning(pop)
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int snprintf(
       char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
#pragma warning(suppress:28719)    
    _Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snprintf(
        char*       const _Buffer,
                                          size_t      const _BufferCount,
                   char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
#pragma warning(suppress:28719)    
    _Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    int _snprintf(    char *_Buffer,   size_t _BufferCount,     char const* _Format, ...);     int _vsnprintf(    char *_Buffer,   size_t _BufferCount,     char const* _Format, va_list _Args);
__inline int _snprintf_c_l(
                   char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snprintf_c(
         char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snprintf_s_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
                                         size_t      const _MaxCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snprintf_s(
       char*       const _Buffer,
                               size_t      const _BufferCount,
                               size_t      const _MaxCount,
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _scprintf_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vscprintf_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _scprintf(
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vscprintf_l(_Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _scprintf_p_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vscprintf_p_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _scprintf_p(
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vscprintf_p(_Format, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
 int __stdio_common_vsscanf(
                                        unsigned __int64 _Options,
              char const*      _Buffer,
                                        size_t           _BufferCount,
        char const*      _Format,
                                    _locale_t        _Locale,
                                           va_list          _ArgList
    );
__inline int _vsscanf_l(
                             char const* const _Buffer,
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )
{
    return __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()),
        _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}
__inline int vsscanf(
                             char const* const _Buffer,
        char const* const _Format,
                                  va_list           _ArgList
    )
{
    return _vsscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
}
__inline int _vsscanf_s_l(
                             char const* const _Buffer,
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )
{
    return __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}
    #pragma warning(push)
    #pragma warning(disable:6530)
    __inline int vsscanf_s(
                                 char const* const _Buffer,
            char const* const _Format,
                                      va_list           _ArgList
        )
    {
        return _vsscanf_s_l(_Buffer, _Format, ((void *)0), _ArgList);
    }
    #pragma warning(pop)
__inline int _sscanf_l(
                                      char const* const _Buffer,
        char const* const _Format,
                                    _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int sscanf(
                            char const* const _Buffer,
        char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = _vsscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _sscanf_s_l(
                                        char const* const _Buffer,
        char const* const _Format,
                                      _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
    __inline int sscanf_s(
                                  char const* const _Buffer,
            char const* const _Format,
        ...)
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        #pragma warning(push)
        #pragma warning(disable: 4996) 
        _Result = vsscanf_s(_Buffer, _Format, _ArgList);
        #pragma warning(pop)
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
#pragma warning(push)
#pragma warning(disable:6530)
__inline int _snscanf_l(
        char const* const _Buffer,
                                        size_t      const _BufferCount,
        char const* const _Format,
                                    _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snscanf(
        char const* const _Buffer,
                                        size_t      const _BufferCount,
                  char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()),
        _Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snscanf_s_l(
          char const* const _Buffer,
                                          size_t      const _BufferCount,
        char const* const _Format,
                                      _locale_t   const _Locale,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Locale)));
    _Result = __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
__inline int _snscanf_s(
        char const* const _Buffer,
                                        size_t      const _BufferCount,
                char const* const _Format,
    ...)
{
    int _Result;
    va_list _ArgList;
    ((void)(__va_start(&_ArgList, _Format)));
    _Result = __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}
#pragma warning(pop)
     char* tempnam(
          char const* _Directory,
          char const* _FilePrefix
        );
     int   fcloseall(void);
     FILE* fdopen(  int _FileHandle,   char const* _Format);
     int   fgetchar(void);
     int   fileno(  FILE* _Stream);
     int   flushall(void);
     int   fputchar(  int _Ch);
     int   getw(  FILE* _Stream);
     int   putw(  int _Ch,   FILE* _Stream);
     int   rmtmp(void);
#pragma once
#pragma once
void* _calloc_base(
      size_t _Count,
      size_t _Size
    );
void* calloc(
       size_t _Count,
       size_t _Size
    );
 int _callnewh(
      size_t _Size
    );
void* _expand(
                void*  _Block,
       size_t _Size
    );
void _free_base(
        void* _Block
    );
void free(
        void* _Block
    );
void* _malloc_base(
      size_t _Size
    );
void* malloc(
       size_t _Size
    );
size_t _msize(
      void* _Block
    );
void* _realloc_base(
         void*  _Block,
                                 size_t _Size
    );
void* realloc(
        void*  _Block,
              size_t _Size
    );
void* _recalloc(
        void*  _Block,
              size_t _Count,
              size_t _Size
    );
void _aligned_free(
        void* _Block
    );
void* _aligned_malloc(
       size_t _Size,
                         size_t _Alignment
    );
void* _aligned_offset_malloc(
       size_t _Size,
                         size_t _Alignment,
                         size_t _Offset
    );
size_t _aligned_msize(
      void*  _Block,
               size_t _Alignment,
               size_t _Offset
    );
void* _aligned_offset_realloc(
        void*  _Block,
              size_t _Size,
                                size_t _Alignment,
                                size_t _Offset
    );
void* _aligned_offset_recalloc(
        void*  _Block,
              size_t _Count,
              size_t _Size,
                                size_t _Alignment,
                                size_t _Offset
    );
void* _aligned_realloc(
        void*  _Block,
              size_t _Size,
                                size_t _Alignment
    );
void* _aligned_recalloc(
        void*  _Block,
              size_t _Count,
              size_t _Size,
                                size_t _Alignment
    );
#pragma once
     void* bsearch_s(
                                                        void const* _Key,
          void const* _Base,
                                                        rsize_t     _NumOfElements,
                                                        rsize_t     _SizeOfElements,
          int (* _PtFuncCompare)(void*, void const*, void const*),
                                                        void*       _Context
        );
     void qsort_s(
          void*   _Base,
                                                             rsize_t _NumOfElements,
                                                             rsize_t _SizeOfElements,
          int (* _PtFuncCompare)(void*, void const*, void const*),
                                                             void*   _Context
        );
 void* bsearch(
                                                    void const* _Key,
      void const* _Base,
                                                    size_t      _NumOfElements,
                                                    size_t      _SizeOfElements,
      int (* _PtFuncCompare)(void const*, void const*)
    );
 void qsort(
      void*  _Base,
                                                         size_t _NumOfElements,
                                                         size_t _SizeOfElements,
      int (* _PtFuncCompare)(void const*, void const*)
    );
 void* _lfind_s(
                                                       void const*   _Key,
      void const*   _Base,
                                                    unsigned int* _NumOfElements,
                                                       size_t        _SizeOfElements,
      int (* _PtFuncCompare)(void*, void const*, void const*), 
                                                       void*         _Context
    );
 void* _lfind(
                                                       void const*   _Key,
      void const*   _Base,
                                                    unsigned int* _NumOfElements,
                                                       unsigned int  _SizeOfElements,
      int (* _PtFuncCompare)(void const*, void const*)
    );
 void* _lsearch_s(
                                                             void const*   _Key,
      void*         _Base,
                                                          unsigned int* _NumOfElements,
                                                             size_t        _SizeOfElements,
      int (* _PtFuncCompare)(void*, void const*, void const*),
                                                             void*         _Context
    );
 void* _lsearch(
                                                             void const*   _Key,
      void*         _Base,
                                                          unsigned int* _NumOfElements,
                                                             unsigned int  _SizeOfElements,
      int (* _PtFuncCompare)(void const*, void const*)
    );
     void* lfind(
                                                           void const*   _Key,
          void const*   _Base,
                                                        unsigned int* _NumOfElements,
                                                           unsigned int  _SizeOfElements,
          int (* _PtFuncCompare)(void const*, void const*)
        );
     void* lsearch(
                                                                void const*   _Key,
          void*         _Base,
                                                             unsigned int* _NumOfElements,
                                                                unsigned int  _SizeOfElements,
          int (* _PtFuncCompare)(void const*, void const*)
        );
#pragma once
 errno_t _itow_s(
                              int      _Value,
      wchar_t* _Buffer,
                              size_t   _BufferCount,
                              int      _Radix
    );
  wchar_t* _itow( int _Value,   wchar_t *_Buffer,  int _Radix);
 errno_t _ltow_s(
                              long     _Value,
      wchar_t* _Buffer,
                              size_t   _BufferCount,
                              int      _Radix
    );
  wchar_t* _ltow( long _Value,   wchar_t *_Buffer,  int _Radix);
 errno_t _ultow_s(
                              unsigned long _Value,
      wchar_t*      _Buffer,
                              size_t        _BufferCount,
                              int           _Radix
    );
  wchar_t* _ultow( unsigned long _Value,   wchar_t *_Buffer,  int _Radix);
 double wcstod(
                        wchar_t const* _String,
        wchar_t**      _EndPtr
    );
 double _wcstod_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                      _locale_t      _Locale
    );
 long wcstol(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );
 long _wcstol_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );
 long long wcstoll(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );
 long long _wcstoll_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );
 unsigned long wcstoul(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );
 unsigned long _wcstoul_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );
 unsigned long long wcstoull(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );
 unsigned long long _wcstoull_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );
 long double wcstold(
                        wchar_t const* _String,
        wchar_t**      _EndPtr
    );
 long double _wcstold_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                      _locale_t      _Locale
    );
 float wcstof(
                        wchar_t const* _String,
        wchar_t**      _EndPtr
    );
 float _wcstof_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                      _locale_t      _Locale
    );
 double _wtof(
      wchar_t const* _String
    );
 double _wtof_l(
        wchar_t const* _String,
      _locale_t      _Locale
    );
 int _wtoi(
      wchar_t const* _String
    );
 int _wtoi_l(
        wchar_t const* _String,
      _locale_t      _Locale
    );
 long _wtol(
      wchar_t const* _String
    );
 long _wtol_l(
        wchar_t const* _String,
      _locale_t      _Locale
    );
 long long _wtoll(
      wchar_t const* _String
    );
 long long _wtoll_l(
        wchar_t const* _String,
      _locale_t      _Locale
    );
 errno_t _i64tow_s(
                              __int64  _Value,
      wchar_t* _Buffer,
                              size_t   _BufferCount,
                              int      _Radix
    );
 wchar_t* _i64tow(
                        __int64  _Value,
        wchar_t* _Buffer,
                        int      _Radix
    );
 errno_t _ui64tow_s(
                              unsigned __int64 _Value,
      wchar_t*         _Buffer,
                              size_t           _BufferCount,
                              int              _Radix
    );
 wchar_t* _ui64tow(
                        unsigned __int64 _Value,
        wchar_t*         _Buffer,
                        int              _Radix
    );
 __int64 _wtoi64(
      wchar_t const* _String
    );
 __int64 _wtoi64_l(
        wchar_t const* _String,
      _locale_t      _Locale
    );
 __int64 _wcstoi64(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );
 __int64 _wcstoi64_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );
 unsigned __int64 _wcstoui64(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );
 unsigned __int64 _wcstoui64_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );
wchar_t* _wfullpath(
      wchar_t*       _Buffer,
                                wchar_t const* _Path,
                                  size_t         _BufferCount
    );
 errno_t _wmakepath_s(
      wchar_t*       _Buffer,
                              size_t         _BufferCount,
                        wchar_t const* _Drive,
                        wchar_t const* _Dir,
                        wchar_t const* _Filename,
                        wchar_t const* _Ext
    );
  void _wmakepath(  wchar_t *_Buffer,  wchar_t const* _Drive,  wchar_t const* _Dir,  wchar_t const* _Filename,  wchar_t const* _Ext);
 void _wperror(
      wchar_t const* _ErrMsg
    );
 void _wsplitpath(
                        wchar_t const* _FullPath,
        wchar_t*       _Drive,
        wchar_t*       _Dir,
        wchar_t*       _Filename,
        wchar_t*       _Ext
    );
 errno_t _wsplitpath_s(
                                  wchar_t const* _FullPath,
         wchar_t*       _Drive,
                                    size_t         _DriveCount,
           wchar_t*       _Dir,
                                    size_t         _DirCount,
      wchar_t*       _Filename,
                                    size_t         _FilenameCount,
           wchar_t*       _Ext,
                                    size_t         _ExtCount
    );
     errno_t _wdupenv_s(
            wchar_t**      _Buffer,
                                                                            size_t*        _BufferCount,
                                                                               wchar_t const* _VarName
        );
     wchar_t* _wgetenv(
          wchar_t const* _VarName
        );
     errno_t _wgetenv_s(
                                     size_t*        _RequiredCount,
          wchar_t*       _Buffer,
                                      size_t         _BufferCount,
                                    wchar_t const* _VarName
        );
     int _wputenv(
          wchar_t const* _EnvString
        );
     errno_t _wputenv_s(
          wchar_t const* _Name,
          wchar_t const* _Value
        );
     errno_t _wsearchenv_s(
                                wchar_t const* _Filename,
                                wchar_t const* _VarName,
          wchar_t*       _Buffer,
                                  size_t         _BufferCount
        );
      void _wsearchenv( wchar_t const* _Filename,  wchar_t const* _VarName,   wchar_t *_ResultPath);
     int _wsystem(
          wchar_t const* _Command
        );
 void _swab(
        char* _Buf1,
        char* _Buf2,
                                                                  int   _SizeInBytes
    );
 void exit(  int _Code);
 void _exit(  int _Code);
 void _Exit(  int _Code);
 void quick_exit(  int _Code);
 void abort(void);
 unsigned int _set_abort_behavior(
      unsigned int _Flags,
      unsigned int _Mask
    );
    typedef int (* _onexit_t)(void);
    int       atexit(void (*)(void));
    _onexit_t _onexit(  _onexit_t _Func);
int at_quick_exit(void (*)(void));
    typedef void (* _purecall_handler)(void);
    typedef void (* _invalid_parameter_handler)(
        wchar_t const*,
        wchar_t const*,
        wchar_t const*, 
        unsigned int,
        uintptr_t
        );
     _purecall_handler _set_purecall_handler(
          _purecall_handler _Handler
        );
     _purecall_handler _get_purecall_handler(void);
     _invalid_parameter_handler _set_invalid_parameter_handler(
          _invalid_parameter_handler _Handler
        );
     _invalid_parameter_handler _get_invalid_parameter_handler(void);
     _invalid_parameter_handler _set_thread_local_invalid_parameter_handler(
          _invalid_parameter_handler _Handler
        );
     _invalid_parameter_handler _get_thread_local_invalid_parameter_handler(void);
  int _set_error_mode(  int _Mode);
 int* _errno(void);
 errno_t _set_errno(  int _Value);
 errno_t _get_errno(  int* _Value);
 unsigned long* __doserrno(void);
 errno_t _set_doserrno(  unsigned long _Value);
 errno_t _get_doserrno(  unsigned long * _Value);
  char** __sys_errlist(void);
  int * __sys_nerr(void);
 void perror(  char const* _ErrMsg);
  char**    __p__pgmptr (void);
  wchar_t** __p__wpgmptr(void);
  int*      __p__fmode  (void);
 errno_t _get_pgmptr (  char**    _Value);
 errno_t _get_wpgmptr(  wchar_t** _Value);
 errno_t _set_fmode  (               int       _Mode );
 errno_t _get_fmode  (              int*      _PMode);
typedef struct _div_t
{
    int quot;
    int rem;
} div_t;
typedef struct _ldiv_t
{
    long quot;
    long rem;
} ldiv_t;
typedef struct _lldiv_t
{
    long long quot;
    long long rem;
} lldiv_t;
  int       abs   (  int       _Number);
  long      labs  (  long      _Number);
  long long llabs (  long long _Number);
  __int64   _abs64(  __int64   _Number);
  unsigned short   _byteswap_ushort(  unsigned short   _Number);
  unsigned long    _byteswap_ulong (  unsigned long    _Number);
  unsigned __int64 _byteswap_uint64(  unsigned __int64 _Number);
   div_t   div  (  int       _Numerator,   int       _Denominator);
   ldiv_t  ldiv (  long      _Numerator,   long      _Denominator);
   lldiv_t lldiv(  long long _Numerator,   long long _Denominator);
#pragma warning (push)
#pragma warning (disable:6540) 
unsigned int _rotl(
      unsigned int _Value,
      int          _Shift
    );
unsigned long _lrotl(
      unsigned long _Value,
      int           _Shift
    );
unsigned __int64 _rotl64(
      unsigned __int64 _Value,
      int              _Shift
    );
unsigned int _rotr(
      unsigned int _Value,
      int          _Shift
    );
unsigned long _lrotr(
      unsigned long _Value,
      int           _Shift
    );
unsigned __int64 _rotr64(
      unsigned __int64 _Value,
      int              _Shift
    );
#pragma warning (pop)
 void srand(  unsigned int _Seed);
   int rand(void);
    #pragma pack(push, 4)
    typedef struct
    {
        unsigned char ld[10];
    } _LDOUBLE;
    #pragma pack(pop)
typedef struct
{
    double x;
} _CRT_DOUBLE;
typedef struct
{
    float f;
} _CRT_FLOAT;
typedef struct
{
    long double x;
} _LONGDOUBLE;
#pragma pack(push, 4)
typedef struct
{
    unsigned char ld12[12];
} _LDBL12;
#pragma pack(pop)
                      double    atof   (  char const* _String);
    int       atoi   (  char const* _String);
                      long      atol   (  char const* _String);
                      long long atoll  (  char const* _String);
                      __int64   _atoi64(  char const* _String);
   double    _atof_l  (  char const* _String,   _locale_t _Locale);
   int       _atoi_l  (  char const* _String,   _locale_t _Locale);
   long      _atol_l  (  char const* _String,   _locale_t _Locale);
   long long _atoll_l (  char const* _String,   _locale_t _Locale);
   __int64   _atoi64_l(  char const* _String,   _locale_t _Locale);
   int _atoflt (  _CRT_FLOAT*  _Result,   char const* _String);
   int _atodbl (  _CRT_DOUBLE* _Result,   char*       _String);
   int _atoldbl(  _LDOUBLE*    _Result,   char*       _String);
 int _atoflt_l(
         _CRT_FLOAT* _Result,
        char const* _String,
      _locale_t   _Locale
    );
 int _atodbl_l(
         _CRT_DOUBLE* _Result,
        char*        _String,
      _locale_t    _Locale
    );
 int _atoldbl_l(
         _LDOUBLE* _Result,
        char*     _String,
      _locale_t _Locale
    );
 float strtof(
                        char const* _String,
        char**      _EndPtr
    );
 float _strtof_l(
                        char const* _String,
        char**      _EndPtr,
                      _locale_t   _Locale
    );
 double strtod(
                        char const* _String,
        char**      _EndPtr
    );
 double _strtod_l(
                        char const* _String,
        char**      _EndPtr,
                      _locale_t   _Locale
    );
 long double strtold(
                        char const* _String,
        char**      _EndPtr
    );
 long double _strtold_l(
                        char const* _String,
        char**      _EndPtr,
                      _locale_t   _Locale
    );
 long strtol(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );
 long _strtol_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );
 long long strtoll(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );
 long long _strtoll_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );
 unsigned long strtoul(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );
 unsigned long _strtoul_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );
 unsigned long long strtoull(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );
 unsigned long long _strtoull_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );
 __int64 _strtoi64(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );
 __int64 _strtoi64_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );
 unsigned __int64 _strtoui64(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );
 unsigned __int64 _strtoui64_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );
 errno_t _itoa_s(
                              int    _Value,
      char*  _Buffer,
                              size_t _BufferCount,
                              int    _Radix
    );
  char* _itoa( int _Value,   char *_Buffer,  int _Radix);
 errno_t _ltoa_s(
                              long   _Value,
      char*  _Buffer,
                              size_t _BufferCount,
                              int    _Radix
    );
  char* _ltoa( long _Value,   char *_Buffer,  int _Radix);
 errno_t _ultoa_s(
                              unsigned long _Value,
      char*         _Buffer,
                              size_t        _BufferCount,
                              int           _Radix
    );
  char* _ultoa( unsigned long _Value,   char *_Buffer,  int _Radix);
 errno_t _i64toa_s(
                              __int64 _Value,
      char*   _Buffer,
                              size_t  _BufferCount,
                              int     _Radix
    );
 char* _i64toa(
                        __int64 _Value,
        char*   _Buffer,
                        int     _Radix
    );
 errno_t _ui64toa_s(
                              unsigned __int64 _Value,
      char*            _Buffer,
                              size_t           _BufferCount,
                              int              _Radix
    );
 char* _ui64toa(
                        unsigned __int64 _Value,
        char*            _Buffer,
                        int              _Radix
    );
 errno_t _ecvt_s(
      char* _Buffer,
       size_t                       _BufferCount,
       double                       _Value,
       int                          _DigitCount,
      int*                         _PtDec,
      int*                         _PtSign
    );
 char* _ecvt(
       double _Value,
       int    _DigitCount,
      int*   _PtDec,
      int*   _PtSign
    );
 errno_t _fcvt_s(
      char*  _Buffer,
                              size_t _BufferCount,
                              double _Value,
                              int    _FractionalDigitCount,
                             int*   _PtDec,
                             int*   _PtSign
    );
 char* _fcvt(
       double _Value,
       int    _FractionalDigitCount,
      int*   _PtDec,
      int*   _PtSign
    );
 errno_t _gcvt_s(
      char*  _Buffer,
                              size_t _BufferCount,
                              double _Value,
                              int    _DigitCount
    );
 char* _gcvt(
                        double _Value,
                        int    _DigitCount,
        char*  _Buffer
    );
 int mblen(
        char const* _Ch,
                                             size_t      _MaxCount
    );
 int _mblen_l(
        char const* _Ch,
                                             size_t      _MaxCount,
                                         _locale_t   _Locale
    );
 size_t _mbstrlen(
      char const* _String
    );
 size_t _mbstrlen_l(
        char const* _String, 
      _locale_t   _Locale
    );
 size_t _mbstrnlen(
      char const* _String,
        size_t      _MaxCount
    );
 size_t _mbstrnlen_l(
        char const* _String,
          size_t      _MaxCount,
      _locale_t   _Locale
    );
 int mbtowc(
                      wchar_t*    _DstCh,
      char const* _SrcCh,
                                      size_t      _SrcSizeInBytes
    );
 int _mbtowc_l(
                      wchar_t*    _DstCh,
      char const* _SrcCh,
                                      size_t      _SrcSizeInBytes,
                                  _locale_t   _Locale
    );
 errno_t mbstowcs_s(
                                                      size_t*     _PtNumOfCharConverted,
      wchar_t*    _DstBuf,
                                                           size_t      _SizeInWords,
                                     char const* _SrcBuf,
                                                           size_t      _MaxCount
    );
  size_t mbstowcs( wchar_t *_Dest,  char const* _Source,  size_t _MaxCount);
 errno_t _mbstowcs_s_l(
                                                      size_t*     _PtNumOfCharConverted,
      wchar_t*    _DstBuf,
                                                           size_t      _SizeInWords,
                                     char const* _SrcBuf,
                                                           size_t      _MaxCount,
                                                       _locale_t   _Locale
    );
  size_t _mbstowcs_l(  wchar_t *_Dest,   char const* _Source,   size_t _MaxCount,   _locale_t _Locale);
 int wctomb(
      char*   _MbCh,
                                wchar_t _WCh
    );
 int _wctomb_l(
        char*     _MbCh,
                          wchar_t   _WCh,
                      _locale_t _Locale
    );
     errno_t wctomb_s(
                                                         int*    _SizeConverted,
          char*   _MbCh,
                                                              rsize_t _SizeInBytes,
                                                              wchar_t _WCh
        );
 errno_t _wctomb_s_l(
                             int*     _SizeConverted,
      char*     _MbCh,
                                  size_t    _SizeInBytes,
                                  wchar_t   _WCh, 
                              _locale_t _Locale);
 errno_t wcstombs_s(
                                                               size_t*        _PtNumOfCharConverted,
      char*          _Dst,
                                                                    size_t         _DstSizeInBytes,
                                                                  wchar_t const* _Src,
                                                                    size_t         _MaxCountInBytes
    );
  size_t wcstombs( char *_Dest,  wchar_t const* _Source,  size_t _MaxCount);
 errno_t _wcstombs_s_l(
                                                               size_t*        _PtNumOfCharConverted,
      char*          _Dst,
                                                                    size_t         _DstSizeInBytes,
                                                                  wchar_t const* _Src,
                                                                    size_t         _MaxCountInBytes,
                                                                _locale_t      _Locale
    );
  size_t _wcstombs_l(  char *_Dest,   wchar_t const* _Source,   size_t _MaxCount,   _locale_t _Locale);
 char* _fullpath(
      char*       _Buffer,
                                char const* _Path,
                                  size_t      _BufferCount
    );
 errno_t _makepath_s(
      char*       _Buffer,
                              size_t      _BufferCount,
                        char const* _Drive,
                        char const* _Dir,
                        char const* _Filename,
                        char const* _Ext
    );
  void _makepath(  char *_Buffer,  char const* _Drive,  char const* _Dir,  char const* _Filename,  char const* _Ext);
 void _splitpath(
                        char const* _FullPath,
        char*       _Drive,
        char*       _Dir,
        char*       _Filename,
        char*       _Ext
    );
 errno_t _splitpath_s(
                                  char const* _FullPath,
         char*       _Drive,
                                    size_t      _DriveCount,
           char*       _Dir,
                                    size_t      _DirCount,
      char*       _Filename,
                                    size_t      _FilenameCount,
           char*       _Ext,
                                    size_t      _ExtCount
    );
     errno_t getenv_s(
                                     size_t*     _RequiredCount,
          char*       _Buffer,
                                      rsize_t     _BufferCount,
                                    char const* _VarName
        );
     int*       __p___argc (void);
     char***    __p___argv (void);
     wchar_t*** __p___wargv(void);
     char***    __p__environ (void);
     wchar_t*** __p__wenviron(void);
     char* getenv(
          char const* _VarName
        );
     errno_t _dupenv_s(
            char**      _Buffer,
                                                                            size_t*     _BufferCount,
                                                                               char const* _VarName
        );
     int system(
          char const* _Command
        );
    #pragma warning (push)
    #pragma warning (disable:6540)
     int _putenv(
          char const* _EnvString
        );
     errno_t _putenv_s(
          char const* _Name,
          char const* _Value
        );
    #pragma warning (pop)
     errno_t _searchenv_s(
                                char const* _Filename,
                                char const* _VarName,
          char*       _Buffer,
                                  size_t      _BufferCount
        );
      void _searchenv( char const* _Filename,  char const* _VarName,   char *_Buffer);
     void _seterrormode(
          int _Mode
        );
     void _beep(
          unsigned _Frequency,
          unsigned _Duration
        );
     void _sleep(
          unsigned long _Duration
        );
    #pragma warning(push)
    #pragma warning(disable: 4141) 
     char* ecvt(
           double _Value,
           int    _DigitCount,
          int*   _PtDec,
          int*   _PtSign
        );
     char* fcvt(
           double _Value,
           int    _FractionalDigitCount,
          int*   _PtDec,
          int*   _PtSign
        );
     char* gcvt(
                            double _Value,
                            int    _DigitCount,
            char*  _DstBuf
        );
     char* itoa(
                            int   _Value,
            char* _Buffer,
                            int   _Radix
        );
     char* ltoa(
                            long  _Value,
            char* _Buffer,
                            int   _Radix
        );
     void swab(
          char* _Buf1,
          char* _Buf2,
                                     int   _SizeInBytes
        );
     char* ultoa(
                            unsigned long _Value,
            char*         _Buffer,
                            int           _Radix
        );
         int putenv(
              char const* _EnvString
            );
    #pragma warning(pop)
    _onexit_t onexit(  _onexit_t _Func);
#pragma once
#pragma once
#pragma once
#pragma once
 extern int* _errno(void);
 errno_t _set_errno(  int _Value);
 errno_t _get_errno(  int* _Value);
 unsigned long* __doserrno(void);
 errno_t _set_doserrno(  unsigned long _Value);
 errno_t _get_doserrno(  unsigned long * _Value);
#pragma once
 void * memchr(
      void const* _Buf,
                                 int         _Val,
                                 size_t      _MaxCount
    );
int memcmp(
      void const* _Buf1,
      void const* _Buf2,
                         size_t      _Size
    );
void* memcpy(
      void* _Dst,
            void const* _Src,
                               size_t      _Size
    );
 void* memmove(
      void*       _Dst,
            void const* _Src,
                                   size_t      _Size
    );
void* memset(
      void*  _Dst,
                               int    _Val,
                               size_t _Size
    );
 char * strchr(
      char const* _Str,
        int         _Val
    );
 char * strrchr(
      char const* _Str,
        int         _Ch
    );
 char * strstr(
      char const* _Str,
      char const* _SubStr
    );
 wchar_t * wcschr(
      wchar_t const* _Str,
        wchar_t        _Ch
    );
 wchar_t * wcsrchr(
      wchar_t const* _Str,
        wchar_t        _Ch
    );
 wchar_t * wcsstr(
      wchar_t const* _Str,
      wchar_t const* _SubStr
    );
    static __inline errno_t memcpy_s(
          void*       const _Destination,
                                                              rsize_t     const _DestinationSize,
                                 void const* const _Source,
                                                              rsize_t     const _SourceSize
        )
    {
        if (_SourceSize == 0)
        {
            return 0;
        }
        { int _Expr_val=!!(_Destination != ((void *)0)); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
        if (_Source == ((void *)0) || _DestinationSize < _SourceSize)
        {
            memset(_Destination, 0, _DestinationSize);
            { int _Expr_val=!!(_Source != ((void *)0)); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
            { int _Expr_val=!!(_DestinationSize >= _SourceSize); if (!(_Expr_val)) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; } };
            return 22;
        }
        memcpy(_Destination, _Source, _SourceSize);
        return 0;
    }
    static __inline errno_t memmove_s(
          void*       const _Destination,
                                                              rsize_t     const _DestinationSize,
                                 void const* const _Source,
                                                              rsize_t     const _SourceSize
        )
    {
        if (_SourceSize == 0)
        {
            return 0;
        }
        { int _Expr_val=!!(_Destination != ((void *)0)); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
        { int _Expr_val=!!(_Source != ((void *)0)); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
        { int _Expr_val=!!(_DestinationSize >= _SourceSize); if (!(_Expr_val)) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; } };
        memmove(_Destination, _Source, _SourceSize);
        return 0;
    }
 int _memicmp(
      void const* _Buf1,
      void const* _Buf2,
                             size_t      _Size
    );
 int _memicmp_l(
      void const* _Buf1,
      void const* _Buf2,
                             size_t      _Size,
                         _locale_t   _Locale
    );
     void* memccpy(
          void*       _Dst,
            void const* _Src,
                                   int         _Val,
                                   size_t      _Size
        );
     int memicmp(
          void const* _Buf1,
          void const* _Buf2,
                                 size_t      _Size
        );
#pragma once
     errno_t wcscat_s(
          wchar_t* _Destination,
          rsize_t _SizeInWords,
          wchar_t const* _Source
        );
     errno_t wcscpy_s(
          wchar_t* _Destination,
          rsize_t _SizeInWords,
          wchar_t const* _Source
        );
     errno_t wcsncat_s(
          wchar_t*       _Destination,
                                     rsize_t        _SizeInWords,
               wchar_t const* _Source,
                                     rsize_t        _MaxCount
        );
     errno_t wcsncpy_s(
          wchar_t*       _Destination,
                                  rsize_t        _SizeInWords,
            wchar_t const* _Source,
                                  rsize_t        _MaxCount
        );
     wchar_t* wcstok_s(
                          wchar_t*       _String,
                                 wchar_t const* _Delimiter,
            wchar_t**      _Context
        );
 wchar_t* _wcsdup(
      wchar_t const* _String
    );
      wchar_t* wcscat( wchar_t *_Destination,  wchar_t const* _Source);
 int wcscmp(
      wchar_t const* _String1,
      wchar_t const* _String2
    );
  wchar_t* wcscpy( wchar_t *_Destination,  wchar_t const* _Source);
 size_t wcscspn(
      wchar_t const* _String,
      wchar_t const* _Control
    );
 size_t wcslen(
      wchar_t const* _String
    );
 size_t wcsnlen(
      wchar_t const* _Source,
                            size_t         _MaxCount
    );
    static __inline size_t wcsnlen_s(
          wchar_t const* _Source,
                                size_t         _MaxCount
        )
    {
        return (_Source == 0) ? 0 : wcsnlen(_Source, _MaxCount);
    }
  wchar_t* wcsncat(  wchar_t *_Destination,   wchar_t const* _Source,   size_t _Count);
 int wcsncmp(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount
    );
  wchar_t* wcsncpy(    wchar_t *_Destination,   wchar_t const* _Source,   size_t _Count);
 wchar_t * wcspbrk(
      wchar_t const* _String,
      wchar_t const* _Control
    );
 size_t wcsspn(
      wchar_t const* _String,
      wchar_t const* _Control
    );
 wchar_t* wcstok(
                          wchar_t*       _String,
                                 wchar_t const* _Delimiter,
        wchar_t**      _Context
    );
    #pragma warning(push)
    #pragma warning(disable: 4141 4996) 
    static __inline wchar_t* _wcstok(
          wchar_t*       const _String,
                 wchar_t const* const _Delimiter
        )
    {
        return wcstok(_String, _Delimiter, 0);
    }
    #pragma warning(pop)
 wchar_t* _wcserror(
      int _ErrorNumber
    );
 errno_t _wcserror_s(
      wchar_t* _Buffer,
                                  size_t   _SizeInWords,
                                  int      _ErrorNumber
    );
 wchar_t* __wcserror(
      wchar_t const* _String
    );
  errno_t __wcserror_s(
      wchar_t*       _Buffer,
                                  size_t         _SizeInWords,
                                wchar_t const* _ErrorMessage
    );
   int _wcsicmp(
      wchar_t const* _String1,
      wchar_t const* _String2
    );
   int _wcsicmp_l(
        wchar_t const* _String1,
        wchar_t const* _String2,
      _locale_t      _Locale
    );
   int _wcsnicmp(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount
    );
   int _wcsnicmp_l(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount,
                        _locale_t      _Locale
    );
  errno_t _wcsnset_s(
      wchar_t* _Destination,
                                 size_t   _SizeInWords,
                                 wchar_t  _Value,
                                 size_t   _MaxCount
    );
  wchar_t* _wcsnset(  wchar_t *_String,   wchar_t _Value,   size_t _MaxCount);
 wchar_t* _wcsrev(
      wchar_t* _String
    );
  errno_t _wcsset_s(
      wchar_t* _Destination,
                                 size_t   _SizeInWords,
                                 wchar_t  _Value
    );
  wchar_t* _wcsset(  wchar_t *_String,   wchar_t _Value);
  errno_t _wcslwr_s(
      wchar_t* _String,
                                 size_t   _SizeInWords
    );
  wchar_t* _wcslwr( wchar_t *_String);
 errno_t _wcslwr_s_l(
      wchar_t*  _String,
                                 size_t    _SizeInWords,
                             _locale_t _Locale
    );
  wchar_t* _wcslwr_l(  wchar_t *_String,   _locale_t _Locale);
 errno_t _wcsupr_s(
      wchar_t* _String,
                          size_t   _Size
    );
  wchar_t* _wcsupr( wchar_t *_String);
 errno_t _wcsupr_s_l(
      wchar_t*  _String,
                          size_t    _Size,
                      _locale_t _Locale
    );
  wchar_t* _wcsupr_l(  wchar_t *_String,   _locale_t _Locale);
 size_t wcsxfrm(
        wchar_t*       _Destination,
                                         wchar_t const* _Source,
                size_t         _MaxCount
    );
 size_t _wcsxfrm_l(
        wchar_t*       _Destination,
                                         wchar_t const* _Source,
                size_t         _MaxCount,
                                       _locale_t      _Locale
    );
 int wcscoll(
      wchar_t const* _String1,
      wchar_t const* _String2
    );
 int _wcscoll_l(
        wchar_t const* _String1,
        wchar_t const* _String2,
      _locale_t      _Locale
    );
 int _wcsicoll(
      wchar_t const* _String1,
      wchar_t const* _String2
    );
 int _wcsicoll_l(
        wchar_t const* _String1,
        wchar_t const* _String2,
      _locale_t      _Locale
    );
 int _wcsncoll(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount
    );
 int _wcsncoll_l(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount,
                        _locale_t      _Locale
    );
 int _wcsnicoll(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount
    );
 int _wcsnicoll_l(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount,
                        _locale_t      _Locale
    );
     wchar_t* wcsdup(
          wchar_t const* _String
        );
     int wcsicmp(
          wchar_t const* _String1,
          wchar_t const* _String2
        );
     int wcsnicmp(
          wchar_t const* _String1,
          wchar_t const* _String2,
                                size_t         _MaxCount
        );
     wchar_t* wcsnset(
          wchar_t* _String,
                                  wchar_t  _Value,
                                  size_t   _MaxCount
        );
     wchar_t* wcsrev(
          wchar_t* _String
        );
     wchar_t* wcsset(
          wchar_t* _String,
               wchar_t  _Value
        );
     wchar_t* wcslwr(
          wchar_t* _String
        );
     wchar_t* wcsupr(
          wchar_t* _String
        );
     int wcsicoll(
          wchar_t const* _String1,
          wchar_t const* _String2
        );
     errno_t strcpy_s(
          char*       _Destination,
                                  rsize_t     _SizeInBytes,
                                char const* _Source
        );
     errno_t strcat_s(
          char*       _Destination,
                                     rsize_t     _SizeInBytes,
                                   char const* _Source
        );
     errno_t strerror_s(
          char*  _Buffer,
                                  size_t _SizeInBytes,
                                  int    _ErrorNumber);
     errno_t strncat_s(
          char*       _Destination,
                                     rsize_t     _SizeInBytes,
               char const* _Source,
                                     rsize_t     _MaxCount
        );
     errno_t strncpy_s(
          char*       _Destination,
                                  rsize_t     _SizeInBytes,
            char const* _Source,
                                  rsize_t     _MaxCount
        );
     char*  strtok_s(
                          char*       _String,
                                 char const* _Delimiter,
            char**      _Context
        );
 void* _memccpy(
      void*       _Dst,
                                   void const* _Src,
                                   int         _Val,
                                   size_t      _MaxCount
    );
      char* strcat( char *_Destination,  char const* _Source);
int strcmp(
      char const* _Str1,
      char const* _Str2
    );
 int _strcmpi(
      char const* _String1,
      char const* _String2
    );
 int strcoll(
      char const* _String1,
      char const* _String2
    );
 int _strcoll_l(
        char const* _String1,
        char const* _String2,
      _locale_t   _Locale
    );
char* strcpy(
      char*       _Dest,
                                            char const* _Source
    );
  char* strcpy( char *_Destination,  char const* _Source);
 size_t strcspn(
      char const* _Str,
      char const* _Control
    );
 char* _strdup(
      char const* _Source
    );
 char*  _strerror(
      char const* _ErrorMessage
    );
 errno_t _strerror_s(
      char*       _Buffer,
                              size_t      _SizeInBytes,
                        char const* _ErrorMessage
    );
 char* strerror(
      int _ErrorMessage
    );
 int _stricmp(
      char const* _String1,
      char const* _String2
    );
 int _stricoll(
      char const* _String1,
      char const* _String2
    );
 int _stricoll_l(
        char const* _String1,
        char const* _String2,
      _locale_t   _Locale
    );
 int _stricmp_l(
        char const* _String1,
        char const* _String2,
      _locale_t   _Locale
    );
size_t strlen(
      char const* _Str
    );
 errno_t _strlwr_s(
      char*  _String,
                          size_t _Size
    );
  char* _strlwr( char *_String);
 errno_t _strlwr_s_l(
      char*     _String,
                          size_t    _Size,
                      _locale_t _Locale
    );
  char* _strlwr_l(  char *_String,   _locale_t _Locale);
 char* strncat(
      char*       _Dest,
        char const* _Source,
                           size_t      _Count
    );
  char* strncat(  char *_Destination,   char const* _Source,   size_t _Count);
 int strncmp(
      char const* _Str1,
      char const* _Str2,
                            size_t      _MaxCount
    );
 int _strnicmp(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount
    );
 int _strnicmp_l(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount,
                        _locale_t   _Locale
    );
 int _strnicoll(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount
    );
 int _strnicoll_l(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount,
                        _locale_t   _Locale
    );
 int _strncoll(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount
    );
 int _strncoll_l(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount,
                        _locale_t   _Locale
    );
 size_t __strncnt(
      char const* _String,
                         size_t      _Count
    );
  char* strncpy(    char *_Destination,   char const* _Source,   size_t _Count);
 size_t strnlen(
      char const* _String,
                            size_t      _MaxCount
    );
    static __inline size_t strnlen_s(
          char const* _String,
                                size_t      _MaxCount
        )
    {
        return _String == 0 ? 0 : strnlen(_String, _MaxCount);
    }
 char* _strnset(
      char*  _Dest,
                           int    _Val,
                           size_t _Count
    );
 errno_t _strnset_s(
      char*  _String,
                                 size_t _SizeInBytes,
                                 int    _Value,
                                 size_t _MaxCount
    );
  char* _strnset(  char *_Destination,   int _Value,   size_t _Count);
 char * strpbrk(
      char const* _Str,
      char const* _Control
    );
 char* _strrev(
      char* _Str
    );
 errno_t _strset_s(
      char*  _Destination,
                                     size_t _DestinationSize,
                                     int    _Value
    );
  char* _strset( char *_Destination,  int _Value);
char* _strset(
      char* _Dest,
           int   _Value
    );
 size_t strspn(
      char const* _Str,
      char const* _Control
    );
 char* strtok(
      char*       _String,
             char const* _Delimiter
    );
 errno_t _strupr_s(
      char*  _String,
                          size_t _Size
    );
  char* _strupr( char *_String);
 errno_t _strupr_s_l(
      char*     _String,
                          size_t    _Size,
                      _locale_t _Locale
    );
  char* _strupr_l(  char *_String,   _locale_t _Locale);
 size_t strxfrm(
        char*       _Destination,
                                         char const* _Source,
                 size_t      _MaxCount
    );
 size_t _strxfrm_l(
        char*       _Destination,
                                         char const* _Source,
                 size_t      _MaxCount,
                                       _locale_t   _Locale
    );
     char* strdup(
          char const* _String
        );
     int strcmpi(
          char const* _String1,
          char const* _String2
        );
     int stricmp(
          char const* _String1,
          char const* _String2
        );
     char* strlwr(
          char* _String
        );
     int strnicmp(
          char const* _String1,
          char const* _String2,
                                size_t      _MaxCount
        );
     char* strnset(
          char*  _String,
                                  int    _Value,
                                  size_t _MaxCount
        );
     char* strrev(
          char* _String
        );
    char* strset(
          char* _String,
               int   _Value);
     char* strupr(
          char* _String
        );
#pragma once
typedef struct lua_State lua_State;
typedef double lua_Number;
typedef long long lua_Integer;
typedef unsigned long long lua_Unsigned;
typedef ptrdiff_t lua_KContext;
typedef int (*lua_CFunction) (lua_State *L);
typedef int (*lua_KFunction) (lua_State *L, int status, lua_KContext ctx);
typedef const char * (*lua_Reader) (lua_State *L, void *ud, size_t *sz);
typedef int (*lua_Writer) (lua_State *L, const void *p, size_t sz, void *ud);
typedef void * (*lua_Alloc) (void *ud, void *ptr, size_t osize, size_t nsize);
extern const char lua_ident[];
extern lua_State *(lua_newstate) (lua_Alloc f, void *ud);
extern void       (lua_close) (lua_State *L);
extern lua_State *(lua_newthread) (lua_State *L);
extern lua_CFunction (lua_atpanic) (lua_State *L, lua_CFunction panicf);
extern const lua_Number *(lua_version) (lua_State *L);
extern int   (lua_absindex) (lua_State *L, int idx);
extern int   (lua_gettop) (lua_State *L);
extern void  (lua_settop) (lua_State *L, int idx);
extern void  (lua_pushvalue) (lua_State *L, int idx);
extern void  (lua_rotate) (lua_State *L, int idx, int n);
extern void  (lua_copy) (lua_State *L, int fromidx, int toidx);
extern int   (lua_checkstack) (lua_State *L, int n);
extern void  (lua_xmove) (lua_State *from, lua_State *to, int n);
extern int             (lua_isnumber) (lua_State *L, int idx);
extern int             (lua_isstring) (lua_State *L, int idx);
extern int             (lua_iscfunction) (lua_State *L, int idx);
extern int             (lua_isinteger) (lua_State *L, int idx);
extern int             (lua_isuserdata) (lua_State *L, int idx);
extern int             (lua_type) (lua_State *L, int idx);
extern const char     *(lua_typename) (lua_State *L, int tp);
extern lua_Number      (lua_tonumberx) (lua_State *L, int idx, int *isnum);
extern lua_Integer     (lua_tointegerx) (lua_State *L, int idx, int *isnum);
extern int             (lua_toboolean) (lua_State *L, int idx);
extern const char     *(lua_tolstring) (lua_State *L, int idx, size_t *len);
extern size_t          (lua_rawlen) (lua_State *L, int idx);
extern lua_CFunction   (lua_tocfunction) (lua_State *L, int idx);
extern void	       *(lua_touserdata) (lua_State *L, int idx);
extern lua_State      *(lua_tothread) (lua_State *L, int idx);
extern const void     *(lua_topointer) (lua_State *L, int idx);
extern void  (lua_arith) (lua_State *L, int op);
extern int   (lua_rawequal) (lua_State *L, int idx1, int idx2);
extern int   (lua_compare) (lua_State *L, int idx1, int idx2, int op);
extern void        (lua_pushnil) (lua_State *L);
extern void        (lua_pushnumber) (lua_State *L, lua_Number n);
extern void        (lua_pushinteger) (lua_State *L, lua_Integer n);
extern const char *(lua_pushlstring) (lua_State *L, const char *s, size_t len);
extern const char *(lua_pushstring) (lua_State *L, const char *s);
extern const char *(lua_pushvfstring) (lua_State *L, const char *fmt,
                                                      va_list argp);
extern const char *(lua_pushfstring) (lua_State *L, const char *fmt, ...);
extern void  (lua_pushcclosure) (lua_State *L, lua_CFunction fn, int n);
extern void  (lua_pushboolean) (lua_State *L, int b);
extern void  (lua_pushlightuserdata) (lua_State *L, void *p);
extern int   (lua_pushthread) (lua_State *L);
extern int (lua_getglobal) (lua_State *L, const char *name);
extern int (lua_gettable) (lua_State *L, int idx);
extern int (lua_getfield) (lua_State *L, int idx, const char *k);
extern int (lua_geti) (lua_State *L, int idx, lua_Integer n);
extern int (lua_rawget) (lua_State *L, int idx);
extern int (lua_rawgeti) (lua_State *L, int idx, lua_Integer n);
extern int (lua_rawgetp) (lua_State *L, int idx, const void *p);
extern void  (lua_createtable) (lua_State *L, int narr, int nrec);
extern void *(lua_newuserdata) (lua_State *L, size_t sz);
extern int   (lua_getmetatable) (lua_State *L, int objindex);
extern int  (lua_getuservalue) (lua_State *L, int idx);
extern void  (lua_setglobal) (lua_State *L, const char *name);
extern void  (lua_settable) (lua_State *L, int idx);
extern void  (lua_setfield) (lua_State *L, int idx, const char *k);
extern void  (lua_seti) (lua_State *L, int idx, lua_Integer n);
extern void  (lua_rawset) (lua_State *L, int idx);
extern void  (lua_rawseti) (lua_State *L, int idx, lua_Integer n);
extern void  (lua_rawsetp) (lua_State *L, int idx, const void *p);
extern int   (lua_setmetatable) (lua_State *L, int objindex);
extern void  (lua_setuservalue) (lua_State *L, int idx);
extern void  (lua_callk) (lua_State *L, int nargs, int nresults,
                           lua_KContext ctx, lua_KFunction k);
extern int   (lua_pcallk) (lua_State *L, int nargs, int nresults, int errfunc,
                            lua_KContext ctx, lua_KFunction k);
extern int   (lua_load) (lua_State *L, lua_Reader reader, void *dt,
                          const char *chunkname, const char *mode);
extern int (lua_dump) (lua_State *L, lua_Writer writer, void *data, int strip);
extern int  (lua_yieldk)     (lua_State *L, int nresults, lua_KContext ctx,
                               lua_KFunction k);
extern int  (lua_resume)     (lua_State *L, lua_State *from, int narg);
extern int  (lua_status)     (lua_State *L);
extern int (lua_isyieldable) (lua_State *L);
extern int (lua_gc) (lua_State *L, int what, int data);
extern int   (lua_error) (lua_State *L);
extern int   (lua_next) (lua_State *L, int idx);
extern void  (lua_concat) (lua_State *L, int n);
extern void  (lua_len)    (lua_State *L, int idx);
extern size_t   (lua_stringtonumber) (lua_State *L, const char *s);
extern lua_Alloc (lua_getallocf) (lua_State *L, void **ud);
extern void      (lua_setallocf) (lua_State *L, lua_Alloc f, void *ud);
typedef struct lua_Debug lua_Debug;  
typedef void (*lua_Hook) (lua_State *L, lua_Debug *ar);
extern int (lua_getstack) (lua_State *L, int level, lua_Debug *ar);
extern int (lua_getinfo) (lua_State *L, const char *what, lua_Debug *ar);
extern const char *(lua_getlocal) (lua_State *L, const lua_Debug *ar, int n);
extern const char *(lua_setlocal) (lua_State *L, const lua_Debug *ar, int n);
extern const char *(lua_getupvalue) (lua_State *L, int funcindex, int n);
extern const char *(lua_setupvalue) (lua_State *L, int funcindex, int n);
extern void *(lua_upvalueid) (lua_State *L, int fidx, int n);
extern void  (lua_upvaluejoin) (lua_State *L, int fidx1, int n1,
                                               int fidx2, int n2);
extern void (lua_sethook) (lua_State *L, lua_Hook func, int mask, int count);
extern lua_Hook (lua_gethook) (lua_State *L);
extern int (lua_gethookmask) (lua_State *L);
extern int (lua_gethookcount) (lua_State *L);
struct lua_Debug {
  int event;
  const char *name;	
  const char *namewhat;	
  const char *what;	
  const char *source;	
  int currentline;	
  int linedefined;	
  int lastlinedefined;	
  unsigned char nups;	
  unsigned char nparams;
  char isvararg;        
  char istailcall;	
  char short_src[60]; 
  struct CallInfo *i_ci;  
};
typedef struct luaL_Reg {
  const char *name;
  lua_CFunction func;
} luaL_Reg;
extern void (luaL_checkversion_) (lua_State *L, lua_Number ver, size_t sz);
extern int (luaL_getmetafield) (lua_State *L, int obj, const char *e);
extern int (luaL_callmeta) (lua_State *L, int obj, const char *e);
extern const char *(luaL_tolstring) (lua_State *L, int idx, size_t *len);
extern int (luaL_argerror) (lua_State *L, int arg, const char *extramsg);
extern const char *(luaL_checklstring) (lua_State *L, int arg,
                                                          size_t *l);
extern const char *(luaL_optlstring) (lua_State *L, int arg,
                                          const char *def, size_t *l);
extern lua_Number (luaL_checknumber) (lua_State *L, int arg);
extern lua_Number (luaL_optnumber) (lua_State *L, int arg, lua_Number def);
extern lua_Integer (luaL_checkinteger) (lua_State *L, int arg);
extern lua_Integer (luaL_optinteger) (lua_State *L, int arg,
                                          lua_Integer def);
extern void (luaL_checkstack) (lua_State *L, int sz, const char *msg);
extern void (luaL_checktype) (lua_State *L, int arg, int t);
extern void (luaL_checkany) (lua_State *L, int arg);
extern int   (luaL_newmetatable) (lua_State *L, const char *tname);
extern void  (luaL_setmetatable) (lua_State *L, const char *tname);
extern void *(luaL_testudata) (lua_State *L, int ud, const char *tname);
extern void *(luaL_checkudata) (lua_State *L, int ud, const char *tname);
extern void (luaL_where) (lua_State *L, int lvl);
extern int (luaL_error) (lua_State *L, const char *fmt, ...);
extern int (luaL_checkoption) (lua_State *L, int arg, const char *def,
                                   const char *const lst[]);
extern int (luaL_fileresult) (lua_State *L, int stat, const char *fname);
extern int (luaL_execresult) (lua_State *L, int stat);
extern int (luaL_ref) (lua_State *L, int t);
extern void (luaL_unref) (lua_State *L, int t, int ref);
extern int (luaL_loadfilex) (lua_State *L, const char *filename,
                                               const char *mode);
extern int (luaL_loadbufferx) (lua_State *L, const char *buff, size_t sz,
                                   const char *name, const char *mode);
extern int (luaL_loadstring) (lua_State *L, const char *s);
extern lua_State *(luaL_newstate) (void);
extern lua_Integer (luaL_len) (lua_State *L, int idx);
extern const char *(luaL_gsub) (lua_State *L, const char *s, const char *p,
                                                  const char *r);
extern void (luaL_setfuncs) (lua_State *L, const luaL_Reg *l, int nup);
extern int (luaL_getsubtable) (lua_State *L, int idx, const char *fname);
extern void (luaL_traceback) (lua_State *L, lua_State *L1,
                                  const char *msg, int level);
extern void (luaL_requiref) (lua_State *L, const char *modname,
                                 lua_CFunction openf, int glb);
typedef struct luaL_Buffer {
  char *b;  
  size_t size;  
  size_t n;  
  lua_State *L;
  char initb[((int)(0x80 * sizeof(void*) * sizeof(lua_Integer)))];  
} luaL_Buffer;
extern void (luaL_buffinit) (lua_State *L, luaL_Buffer *B);
extern char *(luaL_prepbuffsize) (luaL_Buffer *B, size_t sz);
extern void (luaL_addlstring) (luaL_Buffer *B, const char *s, size_t l);
extern void (luaL_addstring) (luaL_Buffer *B, const char *s);
extern void (luaL_addvalue) (luaL_Buffer *B);
extern void (luaL_pushresult) (luaL_Buffer *B);
extern void (luaL_pushresultsize) (luaL_Buffer *B, size_t sz);
extern char *(luaL_buffinitsize) (lua_State *L, luaL_Buffer *B, size_t sz);
typedef struct luaL_Stream {
  FILE *f;  
  lua_CFunction closef;  
} luaL_Stream;
extern int (luaopen_base) (lua_State *L);
extern int (luaopen_coroutine) (lua_State *L);
extern int (luaopen_table) (lua_State *L);
extern int (luaopen_io) (lua_State *L);
extern int (luaopen_os) (lua_State *L);
extern int (luaopen_string) (lua_State *L);
extern int (luaopen_utf8) (lua_State *L);
extern int (luaopen_bit32) (lua_State *L);
extern int (luaopen_math) (lua_State *L);
extern int (luaopen_debug) (lua_State *L);
extern int (luaopen_package) (lua_State *L);
extern void (luaL_openlibs) (lua_State *L);
static int str_len (lua_State *L) {
  size_t l;
  luaL_checklstring(L, 1, &l);
  lua_pushinteger(L, (lua_Integer)l);
  return 1;
}
static lua_Integer posrelat (lua_Integer pos, size_t len) {
  if (pos >= 0) return pos;
  else if (0u - (size_t)pos > len) return 0;
  else return (lua_Integer)len + pos + 1;
}
static int str_sub (lua_State *L) {
  size_t l;
  const char *s = luaL_checklstring(L, 1, &l);
  lua_Integer start = posrelat(luaL_checkinteger(L, 2), l);
  lua_Integer end = posrelat(luaL_optinteger(L, 3, -1), l);
  if (start < 1) start = 1;
  if (end > (lua_Integer)l) end = l;
  if (start <= end)
    lua_pushlstring(L, s + start - 1, (size_t)(end - start) + 1);
  else lua_pushstring(L, "" "");
  return 1;
}
static int str_reverse (lua_State *L) {
  size_t l, i;
  luaL_Buffer b;
  const char *s = luaL_checklstring(L, 1, &l);
  char *p = luaL_buffinitsize(L, &b, l);
  for (i = 0; i < l; i++)
    p[i] = s[l - i - 1];
  luaL_pushresultsize(&b, l);
  return 1;
}
static int str_lower (lua_State *L) {
  size_t l;
  size_t i;
  luaL_Buffer b;
  const char *s = luaL_checklstring(L, 1, &l);
  char *p = luaL_buffinitsize(L, &b, l);
  for (i=0; i<l; i++)
    p[i] = tolower(((unsigned char)(s[i])));
  luaL_pushresultsize(&b, l);
  return 1;
}
static int str_upper (lua_State *L) {
  size_t l;
  size_t i;
  luaL_Buffer b;
  const char *s = luaL_checklstring(L, 1, &l);
  char *p = luaL_buffinitsize(L, &b, l);
  for (i=0; i<l; i++)
    p[i] = toupper(((unsigned char)(s[i])));
  luaL_pushresultsize(&b, l);
  return 1;
}
static int str_rep (lua_State *L) {
  size_t l, lsep;
  const char *s = luaL_checklstring(L, 1, &l);
  lua_Integer n = luaL_checkinteger(L, 2);
  const char *sep = luaL_optlstring(L, 3, "", &lsep);
  if (n <= 0) lua_pushstring(L, "" "");
  else if (l + lsep < l || l + lsep > (sizeof(size_t) < sizeof(int) ? ((size_t)(~(size_t)0)) : (size_t)(2147483647)) / n)  
    return luaL_error(L, "resulting string too large");
  else {
    size_t totallen = (size_t)n * l + (size_t)(n - 1) * lsep;
    luaL_Buffer b;
    char *p = luaL_buffinitsize(L, &b, totallen);
    while (n-- > 1) {  
      memcpy(p, s, l * sizeof(char)); p += l;
      if (lsep > 0) {  
        memcpy(p, sep, lsep * sizeof(char));
        p += lsep;
      }
    }
    memcpy(p, s, l * sizeof(char));  
    luaL_pushresultsize(&b, totallen);
  }
  return 1;
}
static int str_byte (lua_State *L) {
  size_t l;
  const char *s = luaL_checklstring(L, 1, &l);
  lua_Integer posi = posrelat(luaL_optinteger(L, 2, 1), l);
  lua_Integer pose = posrelat(luaL_optinteger(L, 3, posi), l);
  int n, i;
  if (posi < 1) posi = 1;
  if (pose > (lua_Integer)l) pose = l;
  if (posi > pose) return 0;  
  if (pose - posi >= 2147483647)  
    return luaL_error(L, "string slice too long");
  n = (int)(pose -  posi) + 1;
  luaL_checkstack(L, n, "string slice too long");
  for (i=0; i<n; i++)
    lua_pushinteger(L, ((unsigned char)(s[posi+i-1])));
  return n;
}
static int str_char (lua_State *L) {
  int n = lua_gettop(L);  
  int i;
  luaL_Buffer b;
  char *p = luaL_buffinitsize(L, &b, n);
  for (i=1; i<=n; i++) {
    lua_Integer c = luaL_checkinteger(L, i);
    ((void)((((unsigned char)(c)) == c) || luaL_argerror(L, (i), ("value out of range"))));
    p[i - 1] = ((unsigned char)(c));
  }
  luaL_pushresultsize(&b, n);
  return 1;
}
static int writer (lua_State *L, const void *b, size_t size, void *B) {
  (void)L;
  luaL_addlstring((luaL_Buffer *) B, (const char *)b, size);
  return 0;
}
static int str_dump (lua_State *L) {
  luaL_Buffer b;
  int strip = lua_toboolean(L, 2);
  luaL_checktype(L, 1, 6);
  lua_settop(L, 1);
  luaL_buffinit(L,&b);
  if (lua_dump(L, writer, &b, strip) != 0)
    return luaL_error(L, "unable to dump given function");
  luaL_pushresult(&b);
  return 1;
}
typedef struct MatchState {
  const char *src_init;  
  const char *src_end;  
  const char *p_end;  
  lua_State *L;
  int matchdepth;  
  unsigned char level;  
  struct {
    const char *init;
    ptrdiff_t len;
  } capture[32];
} MatchState;
static const char *match (MatchState *ms, const char *s, const char *p);
static int check_capture (MatchState *ms, int l) {
  l -= '1';
  if (l < 0 || l >= ms->level || ms->capture[l].len == (-1))
    return luaL_error(ms->L, "invalid capture index %%%d", l + 1);
  return l;
}
static int capture_to_close (MatchState *ms) {
  int level = ms->level;
  for (level--; level>=0; level--)
    if (ms->capture[level].len == (-1)) return level;
  return luaL_error(ms->L, "invalid pattern capture");
}
static const char *classend (MatchState *ms, const char *p) {
  switch (*p++) {
    case '%': {
      if (p == ms->p_end)
        luaL_error(ms->L, "malformed pattern (ends with '%%')");
      return p+1;
    }
    case '[': {
      if (*p == '^') p++;
      do {  
        if (p == ms->p_end)
          luaL_error(ms->L, "malformed pattern (missing ']')");
        if (*(p++) == '%' && p < ms->p_end)
          p++;  
      } while (*p != ']');
      return p+1;
    }
    default: {
      return p;
    }
  }
}
static int match_class (int c, int cl) {
  int res;
  switch (tolower(cl)) {
    case 'a' : res = isalpha(c); break;
    case 'c' : res = iscntrl(c); break;
    case 'd' : res = isdigit(c); break;
    case 'g' : res = isgraph(c); break;
    case 'l' : res = islower(c); break;
    case 'p' : res = ispunct(c); break;
    case 's' : res = isspace(c); break;
    case 'u' : res = isupper(c); break;
    case 'w' : res = isalnum(c); break;
    case 'x' : res = isxdigit(c); break;
    case 'z' : res = (c == 0); break;  
    default: return (cl == c);
  }
  return (islower(cl) ? res : !res);
}
static int matchbracketclass (int c, const char *p, const char *ec) {
  int sig = 1;
  if (*(p+1) == '^') {
    sig = 0;
    p++;  
  }
  while (++p < ec) {
    if (*p == '%') {
      p++;
      if (match_class(c, ((unsigned char)(*p))))
        return sig;
    }
    else if ((*(p+1) == '-') && (p+2 < ec)) {
      p+=2;
      if (((unsigned char)(*(p-2))) <= c && c <= ((unsigned char)(*p)))
        return sig;
    }
    else if (((unsigned char)(*p)) == c) return sig;
  }
  return !sig;
}
static int singlematch (MatchState *ms, const char *s, const char *p,
                        const char *ep) {
  if (s >= ms->src_end)
    return 0;
  else {
    int c = ((unsigned char)(*s));
    switch (*p) {
      case '.': return 1;  
      case '%': return match_class(c, ((unsigned char)(*(p+1))));
      case '[': return matchbracketclass(c, p, ep-1);
      default:  return (((unsigned char)(*p)) == c);
    }
  }
}
static const char *matchbalance (MatchState *ms, const char *s,
                                   const char *p) {
  if (p >= ms->p_end - 1)
    luaL_error(ms->L, "malformed pattern (missing arguments to '%%b')");
  if (*s != *p) return ((void *)0);
  else {
    int b = *p;
    int e = *(p+1);
    int cont = 1;
    while (++s < ms->src_end) {
      if (*s == e) {
        if (--cont == 0) return s+1;
      }
      else if (*s == b) cont++;
    }
  }
  return ((void *)0);  
}
static const char *max_expand (MatchState *ms, const char *s,
                                 const char *p, const char *ep) {
  ptrdiff_t i = 0;  
  while (singlematch(ms, s + i, p, ep))
    i++;
  while (i>=0) {
    const char *res = match(ms, (s+i), ep+1);
    if (res) return res;
    i--;  
  }
  return ((void *)0);
}
static const char *min_expand (MatchState *ms, const char *s,
                                 const char *p, const char *ep) {
  for (;;) {
    const char *res = match(ms, s, ep+1);
    if (res != ((void *)0))
      return res;
    else if (singlematch(ms, s, p, ep))
      s++;  
    else return ((void *)0);
  }
}
static const char *start_capture (MatchState *ms, const char *s,
                                    const char *p, int what) {
  const char *res;
  int level = ms->level;
  if (level >= 32) luaL_error(ms->L, "too many captures");
  ms->capture[level].init = s;
  ms->capture[level].len = what;
  ms->level = level+1;
  if ((res=match(ms, s, p)) == ((void *)0))  
    ms->level--;  
  return res;
}
static const char *end_capture (MatchState *ms, const char *s,
                                  const char *p) {
  int l = capture_to_close(ms);
  const char *res;
  ms->capture[l].len = s - ms->capture[l].init;  
  if ((res = match(ms, s, p)) == ((void *)0))  
    ms->capture[l].len = (-1);  
  return res;
}
static const char *match_capture (MatchState *ms, const char *s, int l) {
  size_t len;
  l = check_capture(ms, l);
  len = ms->capture[l].len;
  if ((size_t)(ms->src_end-s) >= len &&
      memcmp(ms->capture[l].init, s, len) == 0)
    return s+len;
  else return ((void *)0);
}
static const char *match (MatchState *ms, const char *s, const char *p) {
  if (ms->matchdepth-- == 0)
    luaL_error(ms->L, "pattern too complex");
  init: 
  if (p != ms->p_end) {  
    switch (*p) {
      case '(': {  
        if (*(p + 1) == ')')  
          s = start_capture(ms, s, p + 2, (-2));
        else
          s = start_capture(ms, s, p + 1, (-1));
        break;
      }
      case ')': {  
        s = end_capture(ms, s, p + 1);
        break;
      }
      case '$': {
        if ((p + 1) != ms->p_end)  
          goto dflt;  
        s = (s == ms->src_end) ? s : ((void *)0);  
        break;
      }
      case '%': {  
        switch (*(p + 1)) {
          case 'b': {  
            s = matchbalance(ms, s, p + 2);
            if (s != ((void *)0)) {
              p += 4; goto init;  
            }  
            break;
          }
          case 'f': {  
            const char *ep; char previous;
            p += 2;
            if (*p != '[')
              luaL_error(ms->L, "missing '[' after '%%f' in pattern");
            ep = classend(ms, p);  
            previous = (s == ms->src_init) ? '\0' : *(s - 1);
            if (!matchbracketclass(((unsigned char)(previous)), p, ep - 1) &&
               matchbracketclass(((unsigned char)(*s)), p, ep - 1)) {
              p = ep; goto init;  
            }
            s = ((void *)0);  
            break;
          }
          case '0': case '1': case '2': case '3':
          case '4': case '5': case '6': case '7':
          case '8': case '9': {  
            s = match_capture(ms, s, ((unsigned char)(*(p + 1))));
            if (s != ((void *)0)) {
              p += 2; goto init;  
            }
            break;
          }
          default: goto dflt;
        }
        break;
      }
      default: dflt: {  
        const char *ep = classend(ms, p);  
        if (!singlematch(ms, s, p, ep)) {
          if (*ep == '*' || *ep == '?' || *ep == '-') {  
            p = ep + 1; goto init;  
          }
          else  
            s = ((void *)0);  
        }
        else {  
          switch (*ep) {  
            case '?': {  
              const char *res;
              if ((res = match(ms, s + 1, ep + 1)) != ((void *)0))
                s = res;
              else {
                p = ep + 1; goto init;  
              }
              break;
            }
            case '+':  
              s++;  
            case '*':  
              s = max_expand(ms, s, p, ep);
              break;
            case '-':  
              s = min_expand(ms, s, p, ep);
              break;
            default:  
              s++; p = ep; goto init;  
          }
        }
        break;
      }
    }
  }
  ms->matchdepth++;
  return s;
}
static const char *lmemfind (const char *s1, size_t l1,
                               const char *s2, size_t l2) {
  if (l2 == 0) return s1;  
  else if (l2 > l1) return ((void *)0);  
  else {
    const char *init;  
    l2--;  
    l1 = l1-l2;  
    while (l1 > 0 && (init = (const char *)memchr(s1, *s2, l1)) != ((void *)0)) {
      init++;   
      if (memcmp(init, s2+1, l2) == 0)
        return init-1;
      else {  
        l1 -= init-s1;
        s1 = init;
      }
    }
    return ((void *)0);  
  }
}
static void push_onecapture (MatchState *ms, int i, const char *s,
                                                    const char *e) {
  if (i >= ms->level) {
    if (i == 0)  
      lua_pushlstring(ms->L, s, e - s);  
    else
      luaL_error(ms->L, "invalid capture index %%%d", i + 1);
  }
  else {
    ptrdiff_t l = ms->capture[i].len;
    if (l == (-1)) luaL_error(ms->L, "unfinished capture");
    if (l == (-2))
      lua_pushinteger(ms->L, (ms->capture[i].init - ms->src_init) + 1);
    else
      lua_pushlstring(ms->L, ms->capture[i].init, l);
  }
}
static int push_captures (MatchState *ms, const char *s, const char *e) {
  int i;
  int nlevels = (ms->level == 0 && s) ? 1 : ms->level;
  luaL_checkstack(ms->L, nlevels, "too many captures");
  for (i = 0; i < nlevels; i++)
    push_onecapture(ms, i, s, e);
  return nlevels;  
}
static int nospecials (const char *p, size_t l) {
  size_t upto = 0;
  do {
    if (strpbrk(p + upto, "^$*+?.([%-"))
      return 0;  
    upto += strlen(p + upto) + 1;  
  } while (upto <= l);
  return 1;  
}
static void prepstate (MatchState *ms, lua_State *L,
                       const char *s, size_t ls, const char *p, size_t lp) {
  ms->L = L;
  ms->matchdepth = 200;
  ms->src_init = s;
  ms->src_end = s + ls;
  ms->p_end = p + lp;
}
static void reprepstate (MatchState *ms) {
  ms->level = 0;
  ((void)0);
}
static int str_find_aux (lua_State *L, int find) {
  size_t ls, lp;
  const char *s = luaL_checklstring(L, 1, &ls);
  const char *p = luaL_checklstring(L, 2, &lp);
  lua_Integer init = posrelat(luaL_optinteger(L, 3, 1), ls);
  if (init < 1) init = 1;
  else if (init > (lua_Integer)ls + 1) {  
    lua_pushnil(L);  
    return 1;
  }
  if (find && (lua_toboolean(L, 4) || nospecials(p, lp))) {
    const char *s2 = lmemfind(s + init - 1, ls - (size_t)init + 1, p, lp);
    if (s2) {
      lua_pushinteger(L, (s2 - s) + 1);
      lua_pushinteger(L, (s2 - s) + lp);
      return 2;
    }
  }
  else {
    MatchState ms;
    const char *s1 = s + init - 1;
    int anchor = (*p == '^');
    if (anchor) {
      p++; lp--;  
    }
    prepstate(&ms, L, s, ls, p, lp);
    do {
      const char *res;
      reprepstate(&ms);
      if ((res=match(&ms, s1, p)) != ((void *)0)) {
        if (find) {
          lua_pushinteger(L, (s1 - s) + 1);  
          lua_pushinteger(L, res - s);   
          return push_captures(&ms, ((void *)0), 0) + 2;
        }
        else
          return push_captures(&ms, s1, res);
      }
    } while (s1++ < ms.src_end && !anchor);
  }
  lua_pushnil(L);  
  return 1;
}
static int str_find (lua_State *L) {
  return str_find_aux(L, 1);
}
static int str_match (lua_State *L) {
  return str_find_aux(L, 0);
}
typedef struct GMatchState {
  const char *src;  
  const char *p;  
  const char *lastmatch;  
  MatchState ms;  
} GMatchState;
static int gmatch_aux (lua_State *L) {
  GMatchState *gm = (GMatchState *)lua_touserdata(L, ((-1000000 - 1000) - (3)));
  const char *src;
  gm->ms.L = L;
  for (src = gm->src; src <= gm->ms.src_end; src++) {
    const char *e;
    reprepstate(&gm->ms);
    if ((e = match(&gm->ms, src, gm->p)) != ((void *)0) && e != gm->lastmatch) {
      gm->src = gm->lastmatch = e;
      return push_captures(&gm->ms, src, e);
    }
  }
  return 0;  
}
static int gmatch (lua_State *L) {
  size_t ls, lp;
  const char *s = luaL_checklstring(L, 1, &ls);
  const char *p = luaL_checklstring(L, 2, &lp);
  GMatchState *gm;
  lua_settop(L, 2);  
  gm = (GMatchState *)lua_newuserdata(L, sizeof(GMatchState));
  prepstate(&gm->ms, L, s, ls, p, lp);
  gm->src = s; gm->p = p; gm->lastmatch = ((void *)0);
  lua_pushcclosure(L, gmatch_aux, 3);
  return 1;
}
static void add_s (MatchState *ms, luaL_Buffer *b, const char *s,
                                                   const char *e) {
  size_t l, i;
  lua_State *L = ms->L;
  const char *news = lua_tolstring(L, 3, &l);
  for (i = 0; i < l; i++) {
    if (news[i] != '%')
      ((void)((b)->n < (b)->size || luaL_prepbuffsize((b), 1)), ((b)->b[(b)->n++] = (news[i])));
    else {
      i++;  
      if (!isdigit(((unsigned char)(news[i])))) {
        if (news[i] != '%')
          luaL_error(L, "invalid use of '%c' in replacement string", '%');
        ((void)((b)->n < (b)->size || luaL_prepbuffsize((b), 1)), ((b)->b[(b)->n++] = (news[i])));
      }
      else if (news[i] == '0')
          luaL_addlstring(b, s, e - s);
      else {
        push_onecapture(ms, news[i] - '1', s, e);
        luaL_tolstring(L, -1, ((void *)0));  
        (lua_rotate(L, (-2), -1), lua_settop(L, -(1)-1));  
        luaL_addvalue(b);  
      }
    }
  }
}
static void add_value (MatchState *ms, luaL_Buffer *b, const char *s,
                                       const char *e, int tr) {
  lua_State *L = ms->L;
  switch (tr) {
    case 6: {
      int n;
      lua_pushvalue(L, 3);
      n = push_captures(ms, s, e);
      lua_callk(L, (n), (1), 0, ((void *)0));
      break;
    }
    case 5: {
      push_onecapture(ms, 0, s, e);
      lua_gettable(L, 3);
      break;
    }
    default: {  
      add_s(ms, b, s, e);
      return;
    }
  }
  if (!lua_toboolean(L, -1)) {  
    lua_settop(L, -(1)-1);
    lua_pushlstring(L, s, e - s);  
  }
  else if (!lua_isstring(L, -1))
    luaL_error(L, "invalid replacement value (a %s)", lua_typename(L, lua_type(L,(-1))));
  luaL_addvalue(b);  
}
static int str_gsub (lua_State *L) {
  size_t srcl, lp;
  const char *src = luaL_checklstring(L, 1, &srcl);  
  const char *p = luaL_checklstring(L, 2, &lp);  
  const char *lastmatch = ((void *)0);  
  int tr = lua_type(L, 3);  
  lua_Integer max_s = luaL_optinteger(L, 4, srcl + 1);  
  int anchor = (*p == '^');
  lua_Integer n = 0;  
  MatchState ms;
  luaL_Buffer b;
  ((void)((tr == 3 || tr == 4 || tr == 6 || tr == 5) || luaL_argerror(L, (3), ("string/function/table expected"))));
  luaL_buffinit(L, &b);
  if (anchor) {
    p++; lp--;  
  }
  prepstate(&ms, L, src, srcl, p, lp);
  while (n < max_s) {
    const char *e;
    reprepstate(&ms);  
    if ((e = match(&ms, src, p)) != ((void *)0) && e != lastmatch) {  
      n++;
      add_value(&ms, &b, src, e, tr);  
      src = lastmatch = e;
    }
    else if (src < ms.src_end)  
      ((void)((&b)->n < (&b)->size || luaL_prepbuffsize((&b), 1)), ((&b)->b[(&b)->n++] = (*src++)));
    else break;  
    if (anchor) break;
  }
  luaL_addlstring(&b, src, ms.src_end-src);
  luaL_pushresult(&b);
  lua_pushinteger(L, n);  
  return 2;
}
#pragma warning(push)
#pragma warning(disable:4738) 
#pragma warning(disable:4820) 
    struct _exception
    {
        int    type;   
        char*  name;   
        double arg1;   
        double arg2;   
        double retval; 
    };
        struct _complex
        {
            double x, y; 
        };
typedef float float_t;
typedef double double_t;
        extern double const _HUGE;
void _fperrraise(  int _Except);
   short _dclass(  double _X);
   short _ldclass(  long double _X);
   short _fdclass(  float _X);
   int _dsign(  double _X);
   int _ldsign(  long double _X);
   int _fdsign(  float _X);
   int _dpcomp(  double _X,   double _Y);
   int _ldpcomp(  long double _X,   long double _Y);
   int _fdpcomp(  float _X,   float _Y);
   short _dtest(  double* _Px);
   short _ldtest(  long double* _Px);
   short _fdtest(  float* _Px);
 short _d_int(  double* _Px,   short _Xexp);
 short _ld_int(  long double* _Px,   short _Xexp);
 short _fd_int(  float* _Px,   short _Xexp);
 short _dscale(  double* _Px,   long _Lexp);
 short _ldscale(  long double* _Px,   long _Lexp);
 short _fdscale(  float* _Px,   long _Lexp);
 short _dunscale(  short* _Pex,   double* _Px);
 short _ldunscale(  short* _Pex,   long double* _Px);
 short _fdunscale(  short* _Pex,   float* _Px);
   short _dexp(  double* _Px,   double _Y,   long _Eoff);
   short _ldexp(  long double* _Px,   long double _Y,   long _Eoff);
   short _fdexp(  float* _Px,   float _Y,   long _Eoff);
   short _dnorm(  unsigned short* _Ps);
   short _fdnorm(  unsigned short* _Ps);
   double _dpoly(  double _X,   double const* _Tab,   int _N);
   long double _ldpoly(  long double _X,   long double const* _Tab,   int _N);
   float _fdpoly(  float _X,   float const* _Tab,   int _N);
   double _dlog(  double _X,   int _Baseflag);
   long double _ldlog(  long double _X,   int _Baseflag);
   float _fdlog(  float _X,   int _Baseflag);
   double _dsin(  double _X,   unsigned int _Qoff);
   long double _ldsin(  long double _X,   unsigned int _Qoff);
   float _fdsin(  float _X,   unsigned int _Qoff);
typedef union
{   
    unsigned short _Sh[4];
    double _Val;
} _double_val;
typedef union
{   
    unsigned short _Sh[2];
    float _Val;
} _float_val;
typedef union
{   
    unsigned short _Sh[4];
    long double _Val;
} _ldouble_val;
typedef union
{   
    unsigned short _Word[4];
    float _Float;
    double _Double;
    long double _Long_double;
} _float_const;
extern const _float_const _Denorm_C,  _Inf_C,  _Nan_C,  _Snan_C, _Hugeval_C;
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C;
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C;
extern const _float_const _Eps_C,  _Rteps_C;
extern const _float_const _FEps_C, _FRteps_C;
extern const _float_const _LEps_C, _LRteps_C;
extern const double      _Zero_C,  _Xbig_C;
extern const float       _FZero_C, _FXbig_C;
extern const long double _LZero_C, _LXbig_C;
  int       abs(  int _X);
  long      labs(  long _X);
  long long llabs(  long long _X);
  double acos(  double _X);
  double asin(  double _X);
  double atan(  double _X);
  double atan2(  double _Y,   double _X);
  double cos(  double _X);
  double cosh(  double _X);
  double exp(  double _X);
   double fabs(  double _X);
  double fmod(  double _X,   double _Y);
  double log(  double _X);
  double log10(  double _X);
  double pow(  double _X,   double _Y);
  double sin(  double _X);
  double sinh(  double _X);
   double sqrt(  double _X);
  double tan(  double _X);
  double tanh(  double _X);
   double    acosh(  double _X);
   double    asinh(  double _X);
   double    atanh(  double _X);
    double    atof(  char const* _String);
    double    _atof_l(  char const* _String,   _locale_t _Locale);
   double    _cabs(  struct _complex _Complex_value);
   double    cbrt(  double _X);
   double    ceil(  double _X);
   double    _chgsign(  double _X);
   double    copysign(  double _Number,   double _Sign);
   double    _copysign(  double _Number,   double _Sign);
   double    erf(  double _X);
   double    erfc(  double _X);
   double    exp2(  double _X);
   double    expm1(  double _X);
   double    fdim(  double _X,   double _Y);
   double    floor(  double _X);
   double    fma(  double _X,   double _Y,   double _Z);
   double    fmax(  double _X,   double _Y);
   double    fmin(  double _X,   double _Y);
   double    frexp(  double _X,   int* _Y);
   double    hypot(  double _X,   double _Y);
   double    _hypot(  double _X,   double _Y);
   int       ilogb(  double _X);
   double    ldexp(  double _X,   int _Y);
   double    lgamma(  double _X);
   long long llrint(  double _X);
   long long llround(  double _X);
   double    log1p(  double _X);
   double    log2(  double _X);
   double    logb(  double _X);
   long      lrint(  double _X);
   long      lround(  double _X);
int _matherr(  struct _exception* _Except);
   double modf(  double _X,   double* _Y);
   double nan(  char const*);
   double nearbyint(  double _X);
   double nextafter(  double _X,   double _Y);
   double nexttoward(  double _X,   long double _Y);
   double remainder(  double _X,   double _Y);
   double remquo(  double _X,   double _Y,   int* _Z);
   double rint(  double _X);
   double round(  double _X);
   double scalbln(  double _X,   long _Y);
   double scalbn(  double _X,   int _Y);
   double tgamma(  double _X);
   double trunc(  double _X);
   double _j0(  double _X );
   double _j1(  double _X );
   double _jn(int _X,   double _Y);
   double _y0(  double _X);
   double _y1(  double _X);
   double _yn(  int _X,   double _Y);
   float     acoshf(  float _X);
   float     asinhf(  float _X);
   float     atanhf(  float _X);
   float     cbrtf(  float _X);
   float     _chgsignf(  float _X);
   float     copysignf(  float _Number,   float _Sign);
   float     _copysignf(  float _Number,   float _Sign);
   float     erff(  float _X);
   float     erfcf(  float _X);
   float     expm1f(  float _X);
   float     exp2f(  float _X);
   float     fdimf(  float _X,   float _Y);
   float     fmaf(  float _X,   float _Y,   float _Z);
   float     fmaxf(  float _X,   float _Y);
   float     fminf(  float _X,   float _Y);
   float     _hypotf(  float _X,   float _Y);
   int       ilogbf(  float _X);
   float     lgammaf(  float _X);
   long long llrintf(  float _X);
   long long llroundf(  float _X);
   float     log1pf(  float _X);
   float     log2f(  float _X);
   float     logbf(  float _X);
   long      lrintf(  float _X);
   long      lroundf(  float _X);
   float     nanf(  char const*);
   float     nearbyintf(  float _X);
   float     nextafterf(  float _X,   float _Y);
   float     nexttowardf(  float _X,   long double _Y);
   float     remainderf(  float _X,   float _Y);
   float     remquof(  float _X,   float _Y,   int* _Z);
   float     rintf(  float _X);
   float     roundf(  float _X);
   float     scalblnf(  float _X,   long _Y);
   float     scalbnf(  float _X,   int _Y);
   float     tgammaf(  float _X);
   float     truncf(  float _X);
       float _logbf(  float _X);
       float _nextafterf(  float _X,   float _Y);
       int   _finitef(  float _X);
       int   _isnanf(  float _X);
       int   _fpclassf(  float _X);
       int   _set_FMA3_enable(  int _Flag);
       int   _get_FMA3_enable(void);
       float acosf(  float _X);
       float asinf(  float _X);
       float atan2f(  float _Y,   float _X);
       float atanf(  float _X);
       float ceilf(  float _X);
       float cosf(  float _X);
       float coshf(  float _X);
       float expf(  float _X);
      __inline float fabsf(  float _X)
    {
        return (float)fabs(_X);
    }
       float floorf(  float _X);
       float fmodf(  float _X,   float _Y);
  __inline float frexpf(  float _X,   int *_Y)
{
    return (float)frexp(_X, _Y);
}
  __inline float hypotf(  float _X,   float _Y)
{
    return _hypotf(_X, _Y);
}
  __inline float ldexpf(  float _X,   int _Y)
{
    return (float)ldexp(_X, _Y);
}
       float  log10f(  float _X);
       float  logf(  float _X);
       float  modff(  float _X,   float *_Y);
       float  powf(  float _X,   float _Y);
       float  sinf(  float _X);
       float  sinhf(  float _X);
       float  sqrtf(  float _X);
       float  tanf(  float _X);
       float  tanhf(  float _X);
   long double acoshl(  long double _X);
  __inline long double acosl(  long double _X)
{
    return acos((double)_X);
}
   long double asinhl(  long double _X);
  __inline long double asinl(  long double _X)
{
    return asin((double)_X);
}
  __inline long double atan2l(  long double _Y,   long double _X)
{
    return atan2((double)_Y, (double)_X);
}
   long double atanhl(  long double _X);
  __inline long double atanl(  long double _X)
{
    return atan((double)_X);
}
   long double cbrtl(  long double _X);
  __inline long double ceill(  long double _X)
{
    return ceil((double)_X);
}
  __inline long double _chgsignl(  long double _X)
{
    return _chgsign((double)_X);
}
   long double copysignl(  long double _Number,   long double _Sign);
  __inline long double _copysignl(  long double _Number,   long double _Sign)
{
    return _copysign((double)_Number, (double)_Sign);
}
  __inline long double coshl(  long double _X)
{
    return cosh((double)_X);
}
  __inline long double cosl(  long double _X)
{
    return cos((double)_X);
}
   long double erfl(  long double _X);
   long double erfcl(  long double _X);
  __inline long double expl(  long double _X)
{
    return exp((double)_X);
}
   long double exp2l(  long double _X);
   long double expm1l(  long double _X);
  __inline long double fabsl(  long double _X)
{
    return fabs((double)_X);
}
   long double fdiml(  long double _X,   long double _Y);
  __inline long double floorl(  long double _X)
{
    return floor((double)_X);
}
   long double fmal(  long double _X,   long double _Y,   long double _Z);
   long double fmaxl(  long double _X,   long double _Y);
   long double fminl(  long double _X,   long double _Y);
  __inline long double fmodl(  long double _X,   long double _Y)
{
    return fmod((double)_X, (double)_Y);
}
  __inline long double frexpl(  long double _X,   int *_Y)
{
    return frexp((double)_X, _Y);
}
   int ilogbl(  long double _X);
  __inline long double _hypotl(  long double _X,   long double _Y)
{
    return _hypot((double)_X, (double)_Y);
}
  __inline long double hypotl(  long double _X,   long double _Y)
{
    return _hypot((double)_X, (double)_Y);
}
  __inline long double ldexpl(  long double _X,   int _Y)
{
    return ldexp((double)_X, _Y);
}
   long double lgammal(  long double _X);
   long long llrintl(  long double _X);
   long long llroundl(  long double _X);
  __inline long double logl(  long double _X)
{
    return log((double)_X);
}
  __inline long double log10l(  long double _X)
{
    return log10((double)_X);
}
   long double log1pl(  long double _X);
   long double log2l(  long double _X);
   long double logbl(  long double _X);
   long lrintl(  long double _X);
   long lroundl(  long double _X);
  __inline long double modfl(  long double _X,   long double* _Y)
{
    double _F, _I;
    _F = modf((double)_X, &_I);
    *_Y = _I;
    return _F;
}
   long double nanl(  char const*);
   long double nearbyintl(  long double _X);
   long double nextafterl(  long double _X,   long double _Y);
   long double nexttowardl(  long double _X,   long double _Y);
  __inline long double powl(  long double _X,   long double _Y)
{
    return pow((double)_X, (double)_Y);
}
   long double remainderl(  long double _X,   long double _Y);
   long double remquol(  long double _X,   long double _Y,   int* _Z);
   long double rintl(  long double _X);
   long double roundl(  long double _X);
   long double scalblnl(  long double _X,   long _Y);
   long double scalbnl(  long double _X,   int _Y);
  __inline long double sinhl(  long double _X)
{
    return sinh((double)_X);
}
  __inline long double sinl(  long double _X)
{
    return sin((double)_X);
}
  __inline long double sqrtl(  long double _X)
{
    return sqrt((double)_X);
}
  __inline long double tanhl(  long double _X)
{
    return tanh((double)_X);
}
  __inline long double tanl(  long double _X)
{
    return tan((double)_X);
}
   long double tgammal(  long double _X);
   long double truncl(  long double _X);
            extern double HUGE;
        double j0(  double _X);
        double j1(  double _X);
        double jn(  int _X,   double _Y);
        double y0(  double _X);
        double y1(  double _X);
        double yn(  int _X,   double _Y);
#pragma warning(pop)
static lua_Number adddigit (char *buff, int n, lua_Number x) {
  lua_Number dd = (lua_Number)floor(x);  
  int d = (int)dd;
  buff[n] = (d < 10 ? d + '0' : d - 10 + 'a');  
  return x - dd;  
}
static int num2straux (char *buff, int sz, lua_Number x) {
  if (x != x || x == (lua_Number)((double)((float)(1e+300 * 1e+300))) || x == -(lua_Number)((double)((float)(1e+300 * 1e+300))))
    return ((void)(sz), sprintf(buff,"%.14g",(double)x));
  else if (x == 0) {  
    return ((void)(sz), sprintf(buff,"%.14g" "x0p+0",(double)x));
  }
  else {
    int e;
    lua_Number m = (lua_Number)frexp(x, &e);  
    int n = 0;  
    if (m < 0) {  
      buff[n++] = '-';  
      m = -m;  
    }
    buff[n++] = '0'; buff[n++] = 'x';  
    m = adddigit(buff, n++, m * (1 << (((53) - 1)%4 + 1)));  
    e -= (((53) - 1)%4 + 1);  
    if (m > 0) {  
      buff[n++] = (localeconv()->decimal_point[0]);  
      do {  
        m = adddigit(buff, n++, m * 16);
      } while (m > 0);
    }
    n += ((void)(sz - n), sprintf(buff + n,"p%+d",e));  
    ((void)0);
    return n;
  }
}
static int lua_number2strx (lua_State *L, char *buff, int sz,
                            const char *fmt, lua_Number x) {
  int n = num2straux(buff, sz, x);
  if (fmt[(sizeof("")/sizeof(char))] == 'A') {
    int i;
    for (i = 0; i < n; i++)
      buff[i] = toupper(((unsigned char)(buff[i])));
  }
  else if (fmt[(sizeof("")/sizeof(char))] != 'a')
    luaL_error(L, "modifiers for format '%%a'/'%%A' not implemented");
  return n;
}
static void addquoted (luaL_Buffer *b, const char *s, size_t len) {
  ((void)((b)->n < (b)->size || luaL_prepbuffsize((b), 1)), ((b)->b[(b)->n++] = ('"')));
  while (len--) {
    if (*s == '"' || *s == '\\' || *s == '\n') {
      ((void)((b)->n < (b)->size || luaL_prepbuffsize((b), 1)), ((b)->b[(b)->n++] = ('\\')));
      ((void)((b)->n < (b)->size || luaL_prepbuffsize((b), 1)), ((b)->b[(b)->n++] = (*s)));
    }
    else if (iscntrl(((unsigned char)(*s)))) {
      char buff[10];
      if (!isdigit(((unsigned char)(*(s+1)))))
        ((void)(sizeof(buff)), sprintf(buff,"\\%d",(int)((unsigned char)(*s))));
      else
        ((void)(sizeof(buff)), sprintf(buff,"\\%03d",(int)((unsigned char)(*s))));
      luaL_addstring(b, buff);
    }
    else
      ((void)((b)->n < (b)->size || luaL_prepbuffsize((b), 1)), ((b)->b[(b)->n++] = (*s)));
    s++;
  }
  ((void)((b)->n < (b)->size || luaL_prepbuffsize((b), 1)), ((b)->b[(b)->n++] = ('"')));
}
static void checkdp (char *buff, int nb) {
  if (memchr(buff, '.', nb) == ((void *)0)) {  
    char point = (localeconv()->decimal_point[0]);  
    char *ppoint = (char *)memchr(buff, point, nb);
    if (ppoint) *ppoint = '.';  
  }
}
static void addliteral (lua_State *L, luaL_Buffer *b, int arg) {
  switch (lua_type(L, arg)) {
    case 4: {
      size_t len;
      const char *s = lua_tolstring(L, arg, &len);
      addquoted(b, s, len);
      break;
    }
    case 3: {
      char *buff = luaL_prepbuffsize(b, (120 + (308)));
      int nb;
      if (!lua_isinteger(L, arg)) {  
        lua_Number n = lua_tonumberx(L,(arg),((void *)0));  
        nb = lua_number2strx(L, buff, (120 + (308)), "%" "" "a", n);
        checkdp(buff, nb);  
      }
      else {  
        lua_Integer n = lua_tointegerx(L,(arg),((void *)0));
        const char *format = (n == (-9223372036854775807 - 1))  
                           ? "0x%" "ll" "x"  
                           : "%" "ll" "d";  
        nb = ((void)((120 + (308))), sprintf(buff,format,(long long)n));
      }
      ((b)->n += (nb));
      break;
    }
    case 0: case 1: {
      luaL_tolstring(L, arg, ((void *)0));
      luaL_addvalue(b);
      break;
    }
    default: {
      luaL_argerror(L, arg, "value has no literal form");
    }
  }
}
static const char *scanformat (lua_State *L, const char *strfrmt, char *form) {
  const char *p = strfrmt;
  while (*p != '\0' && strchr("-+ #0", *p) != ((void *)0)) p++;  
  if ((size_t)(p - strfrmt) >= sizeof("-+ #0")/sizeof(char))
    luaL_error(L, "invalid format (repeated flags)");
  if (isdigit(((unsigned char)(*p)))) p++;  
  if (isdigit(((unsigned char)(*p)))) p++;  
  if (*p == '.') {
    p++;
    if (isdigit(((unsigned char)(*p)))) p++;  
    if (isdigit(((unsigned char)(*p)))) p++;  
  }
  if (isdigit(((unsigned char)(*p))))
    luaL_error(L, "invalid format (width or precision too long)");
  *(form++) = '%';
  memcpy(form, strfrmt, ((p - strfrmt) + 1) * sizeof(char));
  form += (p - strfrmt) + 1;
  *form = '\0';
  return p;
}
static void addlenmod (char *form, const char *lenmod) {
  size_t l = strlen(form);
  size_t lm = strlen(lenmod);
  char spec = form[l - 1];
  strcpy(form + l - 1, lenmod);
  form[l + lm - 1] = spec;
  form[l + lm] = '\0';
}
static int str_format (lua_State *L) {
  int top = lua_gettop(L);
  int arg = 1;
  size_t sfl;
  const char *strfrmt = luaL_checklstring(L, arg, &sfl);
  const char *strfrmt_end = strfrmt+sfl;
  luaL_Buffer b;
  luaL_buffinit(L, &b);
  while (strfrmt < strfrmt_end) {
    if (*strfrmt != '%')
      ((void)((&b)->n < (&b)->size || luaL_prepbuffsize((&b), 1)), ((&b)->b[(&b)->n++] = (*strfrmt++)));
    else if (*++strfrmt == '%')
      ((void)((&b)->n < (&b)->size || luaL_prepbuffsize((&b), 1)), ((&b)->b[(&b)->n++] = (*strfrmt++)));  
    else { 
      char form[32];  
      char *buff = luaL_prepbuffsize(&b, (120 + (308)));  
      int nb = 0;  
      if (++arg > top)
        luaL_argerror(L, arg, "no value");
      strfrmt = scanformat(L, strfrmt, form);
      switch (*strfrmt++) {
        case 'c': {
          nb = ((void)((120 + (308))), sprintf(buff,form,(int)luaL_checkinteger(L, arg)));
          break;
        }
        case 'd': case 'i':
        case 'o': case 'u': case 'x': case 'X': {
          lua_Integer n = luaL_checkinteger(L, arg);
          addlenmod(form, "ll");
          nb = ((void)((120 + (308))), sprintf(buff,form,(long long)n));
          break;
        }
        case 'a': case 'A':
          addlenmod(form, "");
          nb = lua_number2strx(L, buff, (120 + (308)), form,
                                  luaL_checknumber(L, arg));
          break;
        case 'e': case 'E': case 'f':
        case 'g': case 'G': {
          lua_Number n = luaL_checknumber(L, arg);
          addlenmod(form, "");
          nb = ((void)((120 + (308))), sprintf(buff,form,(double)n));
          break;
        }
        case 'q': {
          addliteral(L, &b, arg);
          break;
        }
        case 's': {
          size_t l;
          const char *s = luaL_tolstring(L, arg, &l);
          if (form[2] == '\0')  
            luaL_addvalue(&b);  
          else {
            ((void)((l == strlen(s)) || luaL_argerror(L, (arg), ("string contains zeros"))));
            if (!strchr(form, '.') && l >= 100) {
              luaL_addvalue(&b);  
            }
            else {  
              nb = ((void)((120 + (308))), sprintf(buff,form,s));
              lua_settop(L, -(1)-1);  
            }
          }
          break;
        }
        default: {  
          return luaL_error(L, "invalid option '%%%c' to 'format'",
                               *(strfrmt - 1));
        }
      }
      ((void)0);
      ((&b)->n += (nb));
    }
  }
  luaL_pushresult(&b);
  return 1;
}
static const union {
  int dummy;
  char little;  
} nativeendian = {1};
struct cD {
  char c;
  union { double d; void *p; lua_Integer i; lua_Number n; } u;
};
typedef union Ftypes {
  float f;
  double d;
  lua_Number n;
  char buff[5 * sizeof(lua_Number)];  
} Ftypes;
typedef struct Header {
  lua_State *L;
  int islittle;
  int maxalign;
} Header;
// Commented out by yyang.
//typedef enum KOption {
//  Kint,		
//  Kuint,	
//  Kfloat,	
//  Kchar,	
//  Kstring,	
//  Kzstr,	
//  Kpadding,	
//  Kpaddalign,	
//  Knop		
//} KOption;
static int digit (int c) { return '0' <= c && c <= '9'; }
static int getnum (const char **fmt, int df) {
  if (!digit(**fmt))  
    return df;  
  else {
    int a = 0;
    do {
      a = a*10 + (*((*fmt)++) - '0');
    } while (digit(**fmt) && a <= ((int)(sizeof(size_t) < sizeof(int) ? ((size_t)(~(size_t)0)) : (size_t)(2147483647)) - 9)/10);
    return a;
  }
}
static int getnumlimit (Header *h, const char **fmt, int df) {
  int sz = getnum(fmt, df);
  if (sz > 16 || sz <= 0)
    luaL_error(h->L, "integral size (%d) out of limits [1,%d]",
                     sz, 16);
  return sz;
}
static void initheader (lua_State *L, Header *h) {
  h->L = L;
  h->islittle = nativeendian.little;
  h->maxalign = 1;
}
static KOption getoption (Header *h, const char **fmt, int *size) {
  int opt = *((*fmt)++);
  *size = 0;  
  switch (opt) {
    case 'b': *size = sizeof(char); return Kint;
    case 'B': *size = sizeof(char); return Kuint;
    case 'h': *size = sizeof(short); return Kint;
    case 'H': *size = sizeof(short); return Kuint;
    case 'l': *size = sizeof(long); return Kint;
    case 'L': *size = sizeof(long); return Kuint;
    case 'j': *size = sizeof(lua_Integer); return Kint;
    case 'J': *size = sizeof(lua_Integer); return Kuint;
    case 'T': *size = sizeof(size_t); return Kuint;
    case 'f': *size = sizeof(float); return Kfloat;
    case 'd': *size = sizeof(double); return Kfloat;
    case 'n': *size = sizeof(lua_Number); return Kfloat;
    case 'i': *size = getnumlimit(h, fmt, sizeof(int)); return Kint;
    case 'I': *size = getnumlimit(h, fmt, sizeof(int)); return Kuint;
    case 's': *size = getnumlimit(h, fmt, sizeof(size_t)); return Kstring;
    case 'c':
      *size = getnum(fmt, -1);
      if (*size == -1)
        luaL_error(h->L, "missing size for format option 'c'");
      return Kchar;
    case 'z': return Kzstr;
    case 'x': *size = 1; return Kpadding;
    case 'X': return Kpaddalign;
    case ' ': break;
    case '<': h->islittle = 1; break;
    case '>': h->islittle = 0; break;
    case '=': h->islittle = nativeendian.little; break;
    case '!': h->maxalign = getnumlimit(h, fmt, (((size_t)&(((struct cD*)0)->u)))); break;
    default: luaL_error(h->L, "invalid format option '%c'", opt);
  }
  return Knop;
}
static KOption getdetails (Header *h, size_t totalsize,
                           const char **fmt, int *psize, int *ntoalign) {
  KOption opt = getoption(h, fmt, psize);
  int align = *psize;  
  if (opt == Kpaddalign) {  
    if (**fmt == '\0' || getoption(h, fmt, &align) == Kchar || align == 0)
      luaL_argerror(h->L, 1, "invalid next option for option 'X'");
  }
  if (align <= 1 || opt == Kchar)  
    *ntoalign = 0;
  else {
    if (align > h->maxalign)  
      align = h->maxalign;
    if ((align & (align - 1)) != 0)  
      luaL_argerror(h->L, 1, "format asks for alignment not power of 2");
    *ntoalign = (align - (int)(totalsize & (align - 1))) & (align - 1);
  }
  return opt;
}
static void packint (luaL_Buffer *b, lua_Unsigned n,
                     int islittle, int size, int neg) {
  char *buff = luaL_prepbuffsize(b, size);
  int i;
  buff[islittle ? 0 : size - 1] = (char)(n & ((1 << 8) - 1));  
  for (i = 1; i < size; i++) {
    n >>= 8;
    buff[islittle ? i : size - 1 - i] = (char)(n & ((1 << 8) - 1));
  }
  if (neg && size > ((int)sizeof(lua_Integer))) {  
    for (i = ((int)sizeof(lua_Integer)); i < size; i++)  
      buff[islittle ? i : size - 1 - i] = (char)((1 << 8) - 1);
  }
  ((b)->n += (size));  
}
static void copywithendian (volatile char *dest, volatile const char *src,
                            int size, int islittle) {
  if (islittle == nativeendian.little) {
    while (size-- != 0)
      *(dest++) = *(src++);
  }
  else {
    dest += size - 1;
    while (size-- != 0)
      *(dest--) = *(src++);
  }
}
static int str_pack (lua_State *L) {
  luaL_Buffer b;
  Header h;
  const char *fmt = (luaL_checklstring(L, (1), ((void *)0)));  
  int arg = 1;  
  size_t totalsize = 0;  
  initheader(L, &h);
  lua_pushnil(L);  
  luaL_buffinit(L, &b);
  while (*fmt != '\0') {
    int size, ntoalign;
    KOption opt = getdetails(&h, totalsize, &fmt, &size, &ntoalign);
    totalsize += ntoalign + size;
    while (ntoalign-- > 0)
     ((void)((&b)->n < (&b)->size || luaL_prepbuffsize((&b), 1)), ((&b)->b[(&b)->n++] = (0x00)));  
    arg++;
    switch (opt) {
      case Kint: {  
        lua_Integer n = luaL_checkinteger(L, arg);
        if (size < ((int)sizeof(lua_Integer))) {  
          lua_Integer lim = (lua_Integer)1 << ((size * 8) - 1);
          ((void)((-lim <= n && n < lim) || luaL_argerror(L, (arg), ("integer overflow"))));
        }
        packint(&b, (lua_Unsigned)n, h.islittle, size, (n < 0));
        break;
      }
      case Kuint: {  
        lua_Integer n = luaL_checkinteger(L, arg);
        if (size < ((int)sizeof(lua_Integer)))  
          ((void)(((lua_Unsigned)n < ((lua_Unsigned)1 << (size * 8))) || luaL_argerror(L, (arg), ("unsigned overflow"))));
        packint(&b, (lua_Unsigned)n, h.islittle, size, 0);
        break;
      }
      case Kfloat: {  
        volatile Ftypes u;
        char *buff = luaL_prepbuffsize(&b, size);
        lua_Number n = luaL_checknumber(L, arg);  
        if (size == sizeof(u.f)) u.f = (float)n;  
        else if (size == sizeof(u.d)) u.d = (double)n;
        else u.n = n;
        copywithendian(buff, u.buff, size, h.islittle);
        ((&b)->n += (size));
        break;
      }
      case Kchar: {  
        size_t len;
        const char *s = luaL_checklstring(L, arg, &len);
        ((void)((len <= (size_t)size) || luaL_argerror(L, (arg), ("string longer than given size"))));
        luaL_addlstring(&b, s, len);  
        while (len++ < (size_t)size)  
          ((void)((&b)->n < (&b)->size || luaL_prepbuffsize((&b), 1)), ((&b)->b[(&b)->n++] = (0x00)));
        break;
      }
      case Kstring: {  
        size_t len;
        const char *s = luaL_checklstring(L, arg, &len);
        ((void)((size >= (int)sizeof(size_t) || len < ((size_t)1 << (size * 8))) || luaL_argerror(L, (arg), ("string length does not fit in given size"))));
        packint(&b, (lua_Unsigned)len, h.islittle, size, 0);  
        luaL_addlstring(&b, s, len);
        totalsize += len;
        break;
      }
      case Kzstr: {  
        size_t len;
        const char *s = luaL_checklstring(L, arg, &len);
        ((void)((strlen(s) == len) || luaL_argerror(L, (arg), ("string contains zeros"))));
        luaL_addlstring(&b, s, len);
        ((void)((&b)->n < (&b)->size || luaL_prepbuffsize((&b), 1)), ((&b)->b[(&b)->n++] = ('\0')));  
        totalsize += len + 1;
        break;
      }
      case Kpadding: ((void)((&b)->n < (&b)->size || luaL_prepbuffsize((&b), 1)), ((&b)->b[(&b)->n++] = (0x00)));  
      case Kpaddalign: case Knop:
        arg--;  
        break;
    }
  }
  luaL_pushresult(&b);
  return 1;
}
static int str_packsize (lua_State *L) {
  Header h;
  const char *fmt = (luaL_checklstring(L, (1), ((void *)0)));  
  size_t totalsize = 0;  
  initheader(L, &h);
  while (*fmt != '\0') {
    int size, ntoalign;
    KOption opt = getdetails(&h, totalsize, &fmt, &size, &ntoalign);
    size += ntoalign;  
    ((void)((totalsize <= (sizeof(size_t) < sizeof(int) ? ((size_t)(~(size_t)0)) : (size_t)(2147483647)) - size) || luaL_argerror(L, (1), ("format result too large"))));
    totalsize += size;
    switch (opt) {
      case Kstring:  
      case Kzstr:    
        luaL_argerror(L, 1, "variable-length format");
      default:  break;
    }
  }
  lua_pushinteger(L, (lua_Integer)totalsize);
  return 1;
}
static lua_Integer unpackint (lua_State *L, const char *str,
                              int islittle, int size, int issigned) {
  lua_Unsigned res = 0;
  int i;
  int limit = (size  <= ((int)sizeof(lua_Integer))) ? size : ((int)sizeof(lua_Integer));
  for (i = limit - 1; i >= 0; i--) {
    res <<= 8;
    res |= (lua_Unsigned)(unsigned char)str[islittle ? i : size - 1 - i];
  }
  if (size < ((int)sizeof(lua_Integer))) {  
    if (issigned) {  
      lua_Unsigned mask = (lua_Unsigned)1 << (size*8 - 1);
      res = ((res ^ mask) - mask);  
    }
  }
  else if (size > ((int)sizeof(lua_Integer))) {  
    int mask = (!issigned || (lua_Integer)res >= 0) ? 0 : ((1 << 8) - 1);
    for (i = limit; i < size; i++) {
      if ((unsigned char)str[islittle ? i : size - 1 - i] != mask)
        luaL_error(L, "%d-byte integer does not fit into Lua Integer", size);
    }
  }
  return (lua_Integer)res;
}
static int str_unpack (lua_State *L) {
  Header h;
  const char *fmt = (luaL_checklstring(L, (1), ((void *)0)));
  size_t ld;
  const char *data = luaL_checklstring(L, 2, &ld);
  size_t pos = (size_t)posrelat(luaL_optinteger(L, 3, 1), ld) - 1;
  int n = 0;  
  ((void)((pos <= ld) || luaL_argerror(L, (3), ("initial position out of string"))));
  initheader(L, &h);
  while (*fmt != '\0') {
    int size, ntoalign;
    KOption opt = getdetails(&h, pos, &fmt, &size, &ntoalign);
    if ((size_t)ntoalign + size > ~pos || pos + ntoalign + size > ld)
      luaL_argerror(L, 2, "data string too short");
    pos += ntoalign;  
    luaL_checkstack(L, 2, "too many results");
    n++;
    switch (opt) {
      case Kint:
      case Kuint: {
        lua_Integer res = unpackint(L, data + pos, h.islittle, size,
                                       (opt == Kint));
        lua_pushinteger(L, res);
        break;
      }
      case Kfloat: {
        volatile Ftypes u;
        lua_Number num;
        copywithendian(u.buff, data + pos, size, h.islittle);
        if (size == sizeof(u.f)) num = (lua_Number)u.f;
        else if (size == sizeof(u.d)) num = (lua_Number)u.d;
        else num = u.n;
        lua_pushnumber(L, num);
        break;
      }
      case Kchar: {
        lua_pushlstring(L, data + pos, size);
        break;
      }
      case Kstring: {
        size_t len = (size_t)unpackint(L, data + pos, h.islittle, size, 0);
        ((void)((pos + len + size <= ld) || luaL_argerror(L, (2), ("data string too short"))));
        lua_pushlstring(L, data + pos + size, len);
        pos += len;  
        break;
      }
      case Kzstr: {
        size_t len = (int)strlen(data + pos);
        lua_pushlstring(L, data + pos, len);
        pos += len + 1;  
        break;
      }
      case Kpaddalign: case Kpadding: case Knop:
        n--;  
        break;
    }
    pos += size;
  }
  lua_pushinteger(L, pos + 1);  
  return n + 1;
}
static const luaL_Reg strlib[] = {
  {"byte", str_byte},
  {"char", str_char},
  {"dump", str_dump},
  {"find", str_find},
  {"format", str_format},
  {"gmatch", gmatch},
  {"gsub", str_gsub},
  {"len", str_len},
  {"lower", str_lower},
  {"match", str_match},
  {"rep", str_rep},
  {"reverse", str_reverse},
  {"sub", str_sub},
  {"upper", str_upper},
  {"pack", str_pack},
  {"packsize", str_packsize},
  {"unpack", str_unpack},
  {((void *)0), ((void *)0)}
};
static void createmetatable (lua_State *L) {
  lua_createtable(L, 0, 1);  
  lua_pushstring(L, "" "");  
  lua_pushvalue(L, -2);  
  lua_setmetatable(L, -2);  
  lua_settop(L, -(1)-1);  
  lua_pushvalue(L, -2);  
  lua_setfield(L, -2, "__index");  
  lua_settop(L, -(1)-1);  
}
extern int luaopen_string (lua_State *L) {
  (luaL_checkversion_(L, 503, (sizeof(lua_Integer)*16 + sizeof(lua_Number))), lua_createtable(L, 0, sizeof(strlib)/sizeof((strlib)[0]) - 1), luaL_setfuncs(L,strlib,0));
  createmetatable(L);
  return 1;
}
