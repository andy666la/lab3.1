/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "mini_1.y"

#define YY_NO_UNPUT
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <string.h>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
  void yyerror(const char* s);
  int yylex();
  extern int lineNum;
  extern int lineCol;
  extern char* yytext;
  extern char* progName;
  std::string newTemp();
  std::string newLabel();

  char empty[1] = "";

  std::map<std::string, int> variables;
  // maps to 0 for single value
  // maps to # > 0 for array (size of array)
  std::map<std::string, int> functions;
  std::vector<std::string> reservedWords = {"FUNCTION", "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
    "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOREACH", "IN", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR",
    "NOT", "TRUE", "FALSE", "RETURN", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET",
    "R_SQUARE_BRACKET", "COLON", "SEMICOLON", "COMMA", "ASSIGN", "function", "Ident", "beginparams", "endparams", "beginlocals", "endlocals", "integer",
    "beginbody", "endbody", "beginloop", "endloop", "if", "endif", "foreach", "continue", "while", "else", "read", "do", "write"};

#line 103 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    NUMBER = 259,                  /* NUMBER  */
    FUNCTION = 260,                /* FUNCTION  */
    BEGIN_PARAMS = 261,            /* BEGIN_PARAMS  */
    END_PARAMS = 262,              /* END_PARAMS  */
    BEGIN_LOCALS = 263,            /* BEGIN_LOCALS  */
    END_LOCALS = 264,              /* END_LOCALS  */
    BEGIN_BODY = 265,              /* BEGIN_BODY  */
    END_BODY = 266,                /* END_BODY  */
    INTEGER = 267,                 /* INTEGER  */
    ARRAY = 268,                   /* ARRAY  */
    OF = 269,                      /* OF  */
    IF = 270,                      /* IF  */
    THEN = 271,                    /* THEN  */
    ENDIF = 272,                   /* ENDIF  */
    ELSE = 273,                    /* ELSE  */
    WHILE = 274,                   /* WHILE  */
    DO = 275,                      /* DO  */
    FOREACH = 276,                 /* FOREACH  */
    IN = 277,                      /* IN  */
    BEGINLOOP = 278,               /* BEGINLOOP  */
    ENDLOOP = 279,                 /* ENDLOOP  */
    CONTINUE = 280,                /* CONTINUE  */
    READ = 281,                    /* READ  */
    WRITE = 282,                   /* WRITE  */
    AND = 283,                     /* AND  */
    OR = 284,                      /* OR  */
    NOT = 285,                     /* NOT  */
    TRUE = 286,                    /* TRUE  */
    FALSE = 287,                   /* FALSE  */
    RETURN = 288,                  /* RETURN  */
    SUB = 289,                     /* SUB  */
    ADD = 290,                     /* ADD  */
    MULT = 291,                    /* MULT  */
    DIV = 292,                     /* DIV  */
    MOD = 293,                     /* MOD  */
    EQ = 294,                      /* EQ  */
    NEQ = 295,                     /* NEQ  */
    LT = 296,                      /* LT  */
    GT = 297,                      /* GT  */
    LTE = 298,                     /* LTE  */
    GTE = 299,                     /* GTE  */
    L_PAREN = 300,                 /* L_PAREN  */
    R_PAREN = 301,                 /* R_PAREN  */
    L_SQUARE_BRACKET = 302,        /* L_SQUARE_BRACKET  */
    R_SQUARE_BRACKET = 303,        /* R_SQUARE_BRACKET  */
    COLON = 304,                   /* COLON  */
    SEMICOLON = 305,               /* SEMICOLON  */
    COMMA = 306,                   /* COMMA  */
    ASSIGN = 307                   /* ASSIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "mini_1.y"

  char* ident_val;
  int num_val;
  struct E {
    char* place;
    char* code;
    bool array;
  } expr;

  struct S {
    char* code;
  } stat;
 

#line 220 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENT = 3,                      /* IDENT  */
  YYSYMBOL_NUMBER = 4,                     /* NUMBER  */
  YYSYMBOL_FUNCTION = 5,                   /* FUNCTION  */
  YYSYMBOL_BEGIN_PARAMS = 6,               /* BEGIN_PARAMS  */
  YYSYMBOL_END_PARAMS = 7,                 /* END_PARAMS  */
  YYSYMBOL_BEGIN_LOCALS = 8,               /* BEGIN_LOCALS  */
  YYSYMBOL_END_LOCALS = 9,                 /* END_LOCALS  */
  YYSYMBOL_BEGIN_BODY = 10,                /* BEGIN_BODY  */
  YYSYMBOL_END_BODY = 11,                  /* END_BODY  */
  YYSYMBOL_INTEGER = 12,                   /* INTEGER  */
  YYSYMBOL_ARRAY = 13,                     /* ARRAY  */
  YYSYMBOL_OF = 14,                        /* OF  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_THEN = 16,                      /* THEN  */
  YYSYMBOL_ENDIF = 17,                     /* ENDIF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_DO = 20,                        /* DO  */
  YYSYMBOL_FOREACH = 21,                   /* FOREACH  */
  YYSYMBOL_IN = 22,                        /* IN  */
  YYSYMBOL_BEGINLOOP = 23,                 /* BEGINLOOP  */
  YYSYMBOL_ENDLOOP = 24,                   /* ENDLOOP  */
  YYSYMBOL_CONTINUE = 25,                  /* CONTINUE  */
  YYSYMBOL_READ = 26,                      /* READ  */
  YYSYMBOL_WRITE = 27,                     /* WRITE  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_TRUE = 31,                      /* TRUE  */
  YYSYMBOL_FALSE = 32,                     /* FALSE  */
  YYSYMBOL_RETURN = 33,                    /* RETURN  */
  YYSYMBOL_SUB = 34,                       /* SUB  */
  YYSYMBOL_ADD = 35,                       /* ADD  */
  YYSYMBOL_MULT = 36,                      /* MULT  */
  YYSYMBOL_DIV = 37,                       /* DIV  */
  YYSYMBOL_MOD = 38,                       /* MOD  */
  YYSYMBOL_EQ = 39,                        /* EQ  */
  YYSYMBOL_NEQ = 40,                       /* NEQ  */
  YYSYMBOL_LT = 41,                        /* LT  */
  YYSYMBOL_GT = 42,                        /* GT  */
  YYSYMBOL_LTE = 43,                       /* LTE  */
  YYSYMBOL_GTE = 44,                       /* GTE  */
  YYSYMBOL_L_PAREN = 45,                   /* L_PAREN  */
  YYSYMBOL_R_PAREN = 46,                   /* R_PAREN  */
  YYSYMBOL_L_SQUARE_BRACKET = 47,          /* L_SQUARE_BRACKET  */
  YYSYMBOL_R_SQUARE_BRACKET = 48,          /* R_SQUARE_BRACKET  */
  YYSYMBOL_COLON = 49,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 50,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 51,                     /* COMMA  */
  YYSYMBOL_ASSIGN = 52,                    /* ASSIGN  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_Program = 54,                   /* Program  */
  YYSYMBOL_Function = 55,                  /* Function  */
  YYSYMBOL_Declaration = 56,               /* Declaration  */
  YYSYMBOL_Declarations = 57,              /* Declarations  */
  YYSYMBOL_Identifiers = 58,               /* Identifiers  */
  YYSYMBOL_Statements = 59,                /* Statements  */
  YYSYMBOL_Statement = 60,                 /* Statement  */
  YYSYMBOL_ElseStatement = 61,             /* ElseStatement  */
  YYSYMBOL_Var = 62,                       /* Var  */
  YYSYMBOL_Vars = 63,                      /* Vars  */
  YYSYMBOL_Expression = 64,                /* Expression  */
  YYSYMBOL_Expressions = 65,               /* Expressions  */
  YYSYMBOL_MultExp = 66,                   /* MultExp  */
  YYSYMBOL_Term = 67,                      /* Term  */
  YYSYMBOL_BoolExp = 68,                   /* BoolExp  */
  YYSYMBOL_RAExp = 69,                     /* RAExp  */
  YYSYMBOL_RExp = 70,                      /* RExp  */
  YYSYMBOL_RExp1 = 71,                     /* RExp1  */
  YYSYMBOL_Comp = 72,                      /* Comp  */
  YYSYMBOL_Ident = 73,                     /* Ident  */
  YYSYMBOL_LocalIdent = 74,                /* LocalIdent  */
  YYSYMBOL_FunctionIdent = 75              /* FunctionIdent  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  135

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   114,   114,   128,   132,   164,   219,   275,   279,   289,
     294,   306,   314,   322,   356,   389,   429,   459,   559,   572,
     585,   593,   605,   608,   613,   637,   662,   677,   694,   699,
     719,   742,   746,   758,   771,   776,   796,   816,   838,   862,
     894,   899,   907,   912,   924,   949,   954,   977,   982,  1005,
    1024,  1030,  1051,  1057,  1063,  1069,  1075,  1081,  1087,  1093,
    1099,  1106,  1111,  1126
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENT", "NUMBER",
  "FUNCTION", "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS",
  "BEGIN_BODY", "END_BODY", "INTEGER", "ARRAY", "OF", "IF", "THEN",
  "ENDIF", "ELSE", "WHILE", "DO", "FOREACH", "IN", "BEGINLOOP", "ENDLOOP",
  "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT", "TRUE", "FALSE",
  "RETURN", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT",
  "LTE", "GTE", "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET",
  "R_SQUARE_BRACKET", "COLON", "SEMICOLON", "COMMA", "ASSIGN", "$accept",
  "Program", "Function", "Declaration", "Declarations", "Identifiers",
  "Statements", "Statement", "ElseStatement", "Var", "Vars", "Expression",
  "Expressions", "MultExp", "Term", "BoolExp", "RAExp", "RExp", "RExp1",
  "Comp", "Ident", "LocalIdent", "FunctionIdent", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
#endif

#define YYPACT_NINF (-40)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,     4,    10,    -1,   -40,   -36,   -40,   -40,    11,    19,
     -40,   -15,    21,     7,   -14,    19,    44,    18,    19,   -40,
      19,   -40,    15,   -40,    51,    62,    66,    31,    97,    64,
      12,    12,    57,    79,   -40,    19,    19,    69,    73,    36,
      38,    47,    84,   -40,    61,   -40,   -40,    30,    12,   -40,
     100,    13,     3,    75,    72,    70,   -40,   -22,    81,    97,
     -40,    80,    56,   -40,   -40,    69,   -40,   -40,    97,    69,
      69,   -40,   -40,   -40,    69,   -40,    92,    74,   -40,   -40,
     -40,   -40,   -40,   -40,    69,    69,    69,    69,    69,    69,
      97,    12,    12,    69,    97,    91,    19,    19,    82,   -40,
     -40,    77,    83,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   103,   -40,   -40,    76,    99,   102,   118,   123,   -40,
     -40,   -40,    97,   130,    69,   -40,   -40,    12,    97,   -40,
     -40,   -40,   -40,   124,   -40
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     2,    63,     0,     1,     3,     0,     7,
      61,     0,     0,     0,     9,     7,     0,     0,     0,     8,
       7,     5,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,    25,     0,    40,     0,    52,    53,     0,     0,    38,
       0,    28,    34,     0,    45,    47,    50,    25,     0,     0,
      62,     0,    26,    18,    19,     0,    21,     4,    12,     0,
       0,     6,    49,    41,     0,    39,     0,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,    11,
      13,     0,     0,    42,    54,    51,    30,    29,    35,    36,
      37,    22,    46,    48,    33,     0,     0,     0,     0,    27,
      24,    43,     0,     0,    31,    44,    15,     0,     0,    23,
      14,    32,    16,     0,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -40,   146,   -40,   -40,   -12,   132,   -39,   -40,   -40,   -23,
     -34,   -16,    27,    22,   -40,   -30,    60,   -40,   109,   -40,
      -9,   -40,   -40
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    11,    12,    13,    38,    39,   123,    49,
      63,    50,   115,    51,    52,    53,    54,    55,    56,    84,
      57,    61,     5
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      14,    58,    64,    19,     1,    40,    14,     4,    24,    14,
       6,    14,    62,    62,     8,    10,    43,     9,    77,    41,
      95,    66,    10,    93,    75,    70,    41,    41,    16,    99,
      21,    22,    76,    10,    73,    15,    40,    18,    41,    87,
      88,    89,    44,    45,    46,    40,    47,    85,    86,    98,
      41,   111,    20,   100,   101,   116,    17,    48,   102,    41,
      26,   112,    25,   119,    10,    43,    27,    40,   105,   106,
     107,    40,    10,    43,    62,    74,    28,   114,    42,    29,
      59,    41,    60,   129,    67,    41,    68,   118,    41,   133,
      69,    90,    45,    46,    70,    47,    71,   132,    92,    40,
      10,    91,    96,    47,    94,    40,    48,    97,   114,   108,
     109,   110,    30,    41,    65,   117,    31,    32,    33,    41,
     104,   122,    34,    35,    36,   120,   126,   124,   103,   121,
      37,    78,    79,    80,    81,    82,    83,   127,   103,    78,
      79,    80,    81,    82,    83,   125,   128,   130,   134,     7,
      23,   131,   113,    72
};

static const yytype_uint8 yycheck[] =
{
       9,    31,    36,    15,     5,    28,    15,     3,    20,    18,
       0,    20,    35,    36,    50,     3,     4,     6,    48,    28,
      59,    37,     3,    45,    47,    47,    35,    36,     7,    68,
      12,    13,    48,     3,     4,    50,    59,    51,    47,    36,
      37,    38,    30,    31,    32,    68,    34,    34,    35,    65,
      59,    90,     8,    69,    70,    94,    49,    45,    74,    68,
       9,    91,    47,    97,     3,     4,     4,    90,    84,    85,
      86,    94,     3,     4,    97,    45,    10,    93,    14,    48,
      23,    90,     3,   122,    11,    94,    50,    96,    97,   128,
      52,    16,    31,    32,    47,    34,    12,   127,    28,   122,
       3,    29,    22,    34,    23,   128,    45,    51,   124,    87,
      88,    89,    15,   122,    45,    24,    19,    20,    21,   128,
      46,    18,    25,    26,    27,    48,    24,    51,    46,    46,
      33,    39,    40,    41,    42,    43,    44,    19,    46,    39,
      40,    41,    42,    43,    44,    46,    23,    17,    24,     3,
      18,   124,    92,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    54,    55,     3,    75,     0,    54,    50,     6,
       3,    56,    57,    58,    73,    50,     7,    49,    51,    57,
       8,    12,    13,    58,    57,    47,     9,     4,    10,    48,
      15,    19,    20,    21,    25,    26,    27,    33,    59,    60,
      62,    73,    14,     4,    30,    31,    32,    34,    45,    62,
      64,    66,    67,    68,    69,    70,    71,    73,    68,    23,
       3,    74,    62,    63,    63,    45,    64,    11,    50,    52,
      47,    12,    71,     4,    45,    62,    64,    68,    39,    40,
      41,    42,    43,    44,    72,    34,    35,    36,    37,    38,
      16,    29,    28,    45,    23,    59,    22,    51,    64,    59,
      64,    64,    64,    46,    46,    64,    64,    64,    66,    66,
      66,    59,    68,    69,    64,    65,    59,    24,    73,    63,
      48,    46,    18,    61,    51,    46,    24,    19,    23,    59,
      17,    65,    68,    59,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    54,    55,    56,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    65,    65,    65,    66,    66,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      72,    73,    74,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,    12,     3,     8,     0,     3,     1,
       3,     3,     2,     3,     6,     5,     6,     7,     2,     2,
       1,     2,     0,     2,     4,     1,     1,     3,     1,     3,
       3,     0,     3,     1,     1,     3,     3,     3,     1,     2,
       1,     2,     3,     4,     4,     1,     3,     1,     3,     2,
       1,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: %empty  */
#line 114 "mini_1.y"
{
  std::string tempMain = "main";
  if ( functions.find(tempMain) == functions.end()) {
    char temp[128];
    snprintf(temp, 128, "Function main not declared");
    yyerror(temp);
  }
  // Check if user declared variable the same as program name
  if (variables.find(std::string(progName)) != variables.end()) {
    char temp[128];
    snprintf(temp, 128, "Declared program name as variable.");
    yyerror(temp);
  }
}
#line 1647 "y.tab.c"
    break;

  case 3: /* Program: Function Program  */
#line 129 "mini_1.y"
{
}
#line 1654 "y.tab.c"
    break;

  case 4: /* Function: FUNCTION FunctionIdent SEMICOLON BEGIN_PARAMS Declarations END_PARAMS BEGIN_LOCALS Declarations END_LOCALS BEGIN_BODY Statements END_BODY  */
#line 133 "mini_1.y"
{
  std::string temp = "func ";
  temp.append((yyvsp[-10].expr).place);
  temp.append("\n");
  temp.append((yyvsp[-10].expr).code);
  temp.append((yyvsp[-7].expr).code);
  // Parameter initalization
  std::string init_params = (yyvsp[-7].expr).code;
  int param_number = 0;
  while (init_params.find(".") != std::string::npos) {
    size_t pos = init_params.find(".");
    init_params.replace(pos, 1, "=");
    std::string param = ", $";
    param.append(std::to_string(param_number++));
    param.append("\n");
    init_params.replace(init_params.find("\n", pos), 1, param);
  }
  temp.append(init_params);
  temp.append((yyvsp[-4].expr).code);
  std::string statements((yyvsp[-1].stat).code);
  // Check if there are any leftover continues (test 09)
  if (statements.find("continue") != std::string::npos) {
    printf("ERROR: Continue outside loop in function %s\n", (yyvsp[-10].expr).place);
  }
  temp.append(statements);
  temp.append("endfunc\n");

  printf("%s", temp.c_str());
}
#line 1688 "y.tab.c"
    break;

  case 5: /* Declaration: Identifiers COLON INTEGER  */
#line 165 "mini_1.y"
{
  std::string vars((yyvsp[-2].expr).place);
  std::string temp;
  std::string variable;
  bool cont = true;

  // Build list of declarations base on list of identifiers
  // identifiers use "|" as delimeter
  size_t oldpos = 0;
  size_t pos = 0;
  bool isReserved = false;
  while (cont) {
    pos = vars.find("|", oldpos);
    if (pos == std::string::npos) {
      temp.append(". ");
      variable = vars.substr(oldpos,pos);
      temp.append(variable);
      temp.append("\n");
      cont = false;
    }
    else {
      size_t len = pos - oldpos;
      temp.append(". ");
      variable = vars.substr(oldpos, len);
      temp.append(variable);
      temp.append("\n");
    }
    //check for reserved keywords (test 05)
    for (unsigned int i = 0; i < reservedWords.size(); ++i) {
      if (reservedWords.at(i) == variable) {
        isReserved = true;
      }
    }
    // Check for redeclaration (test 04) TODO same name as program
    if (variables.find(variable) != variables.end()) {
      char temp[128];
      snprintf(temp, 128, "Redeclaration of variable %s", variable.c_str());
      yyerror(temp);
    }
    else if (isReserved){
      char temp[128];
      snprintf(temp, 128, "Invalid declaration of reserved words %s", variable.c_str());
      yyerror(temp);
    }
    else {
      variables.insert(std::pair<std::string,int>(variable,0));
    }

    oldpos = pos + 1;
  }

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
}
#line 1747 "y.tab.c"
    break;

  case 6: /* Declaration: Identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER  */
#line 220 "mini_1.y"
{
  // Check if declaring arrays of size <= 0 (test 08)
  if ((yyvsp[-3].num_val) <= 0) {
    char temp[128];
    snprintf(temp, 128, "Array size can't be less than 1");
    yyerror(temp);
  }

  std::string vars((yyvsp[-7].expr).place);
  std::string temp;
  std::string variable;
  bool cont = true;

  // Build list of declarations base on list of identifiers
  // identifiers use "|" as delimeter
  size_t oldpos = 0;
  size_t pos = 0;
  while (cont) {
    pos = vars.find("|", oldpos);
    if (pos == std::string::npos) {
      temp.append(".[] ");
      variable = vars.substr(oldpos, pos);
      temp.append(variable);
      temp.append(", ");
      temp.append(std::to_string((yyvsp[-3].num_val)));
      temp.append("\n");
      cont = false;
    }
    else {
      size_t len = pos - oldpos;
      temp.append(".[] ");
      variable = vars.substr(oldpos, len);
      temp.append(variable);
      temp.append(", ");
      temp.append(std::to_string((yyvsp[-3].num_val)));
      temp.append("\n");
    }
    // Check for redeclaraion (test 04)
    if (variables.find(variable) != variables.end()) {
      char temp[128];
      snprintf(temp, 128, "Redeclaration of variable %s", variable.c_str());
      yyerror(temp);
    }
    else {
      variables.insert(std::pair<std::string,int>(variable,(yyvsp[-3].num_val)));
    }

    oldpos = pos + 1;
  }

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
}
#line 1805 "y.tab.c"
    break;

  case 7: /* Declarations: %empty  */
#line 275 "mini_1.y"
{
  (yyval.expr).code = strdup(empty);
  (yyval.expr).place = strdup(empty);
}
#line 1814 "y.tab.c"
    break;

  case 8: /* Declarations: Declaration SEMICOLON Declarations  */
#line 280 "mini_1.y"
{
  std::string temp;
  temp.append((yyvsp[-2].expr).code);
  temp.append((yyvsp[0].expr).code);

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
}
#line 1827 "y.tab.c"
    break;

  case 9: /* Identifiers: Ident  */
#line 290 "mini_1.y"
{
  (yyval.expr).place = strdup((yyvsp[0].expr).place);
  (yyval.expr).code = strdup(empty);
}
#line 1836 "y.tab.c"
    break;

  case 10: /* Identifiers: Ident COMMA Identifiers  */
#line 295 "mini_1.y"
{
  // use "|" as delimeter
  std::string temp;
  temp.append((yyvsp[-2].expr).place);
  temp.append("|");
  temp.append((yyvsp[0].expr).place);

  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
}
#line 1851 "y.tab.c"
    break;

  case 11: /* Statements: Statement SEMICOLON Statements  */
#line 307 "mini_1.y"
{
  std::string temp;
  temp.append((yyvsp[-2].stat).code);
  temp.append((yyvsp[0].stat).code);

  (yyval.stat).code = strdup(temp.c_str());
}
#line 1863 "y.tab.c"
    break;

  case 12: /* Statements: Statement SEMICOLON  */
#line 315 "mini_1.y"
{
  std::string temp;
  temp.append((yyvsp[-1].stat).code);

  (yyval.stat).code = strdup(temp.c_str());
}
#line 1874 "y.tab.c"
    break;

  case 13: /* Statement: Var ASSIGN Expression  */
#line 323 "mini_1.y"
{
  std::string temp;
  temp.append((yyvsp[-2].expr).code);
  temp.append((yyvsp[0].expr).code);
  std::string intermediate = (yyvsp[0].expr).place;
  if ((yyvsp[-2].expr).array && (yyvsp[0].expr).array) {
    intermediate = newTemp();
    temp.append(". ");
    temp.append(intermediate);
    temp.append("\n");
    temp.append("=[] ");
    temp.append(intermediate);
    temp.append(", ");
    temp.append((yyvsp[0].expr).place);
    temp.append("\n");
    temp.append("[]= ");
  }
  else if ((yyvsp[-2].expr).array) {
    temp.append("[]= ");
  }
  else if ((yyvsp[0].expr).array) {
    temp.append("=[] ");
  }
  else {
    temp.append("= ");
  }
  temp.append((yyvsp[-2].expr).place);
  temp.append(", ");
  temp.append(intermediate);
  temp.append("\n");

  (yyval.stat).code = strdup(temp.c_str());
}
#line 1912 "y.tab.c"
    break;

  case 14: /* Statement: IF BoolExp THEN Statements ElseStatement ENDIF  */
#line 357 "mini_1.y"
{
  std::string then_begin = newLabel();
  std::string after = newLabel();
  std::string temp;

  // evaluate expression
  temp.append((yyvsp[-4].expr).code);
  // if true goto then label
  temp.append("?:= ");
  temp.append(then_begin);
  temp.append(", ");
  temp.append((yyvsp[-4].expr).place);
  temp.append("\n");
  // else code
  temp.append((yyvsp[-1].stat).code);
  // goto after
  temp.append(":= ");
  temp.append(after);
  temp.append("\n");
  // then label
  temp.append(": ");
  temp.append(then_begin);
  temp.append("\n");
  // then code
  temp.append((yyvsp[-2].stat).code);
  // after label
  temp.append(": ");
  temp.append(after);
  temp.append("\n");

  (yyval.stat).code = strdup(temp.c_str());
}
#line 1949 "y.tab.c"
    break;

  case 15: /* Statement: WHILE BoolExp BEGINLOOP Statements ENDLOOP  */
#line 390 "mini_1.y"
{
  std::string temp;
  std::string beginWhile = newLabel();
  std::string beginLoop = newLabel();
  std::string endLoop = newLabel();
  // replace continue
  std::string statement = (yyvsp[-1].stat).code;
  std::string jump;
  jump.append(":= ");
  jump.append(beginWhile);
  while (statement.find("continue") != std::string::npos) {
    statement.replace(statement.find("continue"), 8, jump);
  }

  temp.append(": ");
  temp.append(beginWhile);
  temp.append("\n");
  temp.append((yyvsp[-3].expr).code);
  temp.append("?:= ");
  temp.append(beginLoop);
  temp.append(", ");
  temp.append((yyvsp[-3].expr).place);
  temp.append("\n");
  temp.append(":= ");
  temp.append(endLoop);
  temp.append("\n");
  temp.append(": ");
  temp.append(beginLoop);
  temp.append("\n");
  temp.append(statement);
  temp.append(":= ");
  temp.append(beginWhile);
  temp.append("\n");
  temp.append(": ");
  temp.append(endLoop);
  temp.append("\n");

  (yyval.stat).code = strdup(temp.c_str());
}
#line 1993 "y.tab.c"
    break;

  case 16: /* Statement: DO BEGINLOOP Statements ENDLOOP WHILE BoolExp  */
#line 430 "mini_1.y"
{
  std::string temp;
  std::string beginLoop = newLabel();
  std::string beginWhile = newLabel();
  // replace continue
  std::string statement = (yyvsp[-3].stat).code;
  std::string jump;
  jump.append(":= ");
  jump.append(beginWhile);
  while (statement.find("continue") != std::string::npos) {
    statement.replace(statement.find("continue"), 8, jump);
  }

  temp.append(": ");
  temp.append(beginLoop);
  temp.append("\n");
  temp.append(statement);
  temp.append(": ");
  temp.append(beginWhile);
  temp.append("\n");
  temp.append((yyvsp[0].expr).code);
  temp.append("?:= ");
  temp.append(beginLoop);
  temp.append(", ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.stat).code = strdup(temp.c_str());
}
#line 2027 "y.tab.c"
    break;

  case 17: /* Statement: FOREACH LocalIdent IN Ident BEGINLOOP Statements ENDLOOP  */
#line 460 "mini_1.y"
{
  std::string temp;
  std::string count = newTemp();
  std::string check = newTemp();
  std::string begin = newLabel();
  std::string beginLoop = newLabel();
  std::string increment = newLabel();
  std::string endLoop = newLabel();
  // replace continue
  std::string statement = (yyvsp[-1].stat).code;
  std::string jump;
  jump.append(":= ");
  jump.append(increment);
  while (statement.find("continue") != std::string::npos) {
    statement.replace(statement.find("continue"), 8, jump);
  }
  // Checks for second ident
  if (variables.find(std::string((yyvsp[-3].expr).place)) == variables.end()) {
    char temp[128];
    snprintf(temp, 128, "Use of undeclared variable %s", (yyvsp[-3].expr).place);
    yyerror(temp);
  }
  // Check if second ident is scalar
  else if (variables.find(std::string((yyvsp[-3].expr).place))->second == 0) {
    char temp[128];
    snprintf(temp, 128, "Use of scalar variable %s in foreach", (yyvsp[-3].expr).place);
    yyerror(temp);
  }
  // checks for LocalIdent happen in LocalIdent (redeclaration test)

  // Initalize first ident and check
  temp.append(". ");
  temp.append((yyvsp[-5].expr).place);
  temp.append("\n");
  temp.append(". ");
  temp.append(check);
  temp.append("\n");
  temp.append(". ");
  temp.append(count);
  temp.append("\n");
  temp.append("= ");
  temp.append(count);
  temp.append(", 0");
  temp.append("\n");
  // Check if count is less than size of array
  temp.append(": ");
  temp.append(begin);
  temp.append("\n");
  temp.append("< ");
  temp.append(check);
  temp.append(", ");
  temp.append(count);
  temp.append(", ");
  temp.append(std::to_string(variables.find(std::string((yyvsp[-3].expr).place))->second));
  temp.append("\n");
  // Jump to begin loop if check is true
  temp.append("?:= ");
  temp.append(beginLoop);
  temp.append(", ");
  temp.append(check);
  temp.append("\n");
  // Jump to end loop if check is false
  temp.append(":= ");
  temp.append(endLoop);
  temp.append("\n");
  // Begin loop
  temp.append(": ");
  temp.append(beginLoop);
  temp.append("\n");
  // Set first ident to value of second ident
  temp.append("=[] ");
  temp.append((yyvsp[-5].expr).place);
  temp.append(", ");
  temp.append((yyvsp[-3].expr).place);
  temp.append(", ");
  temp.append(count);
  temp.append("\n");
  // Execute code
  temp.append(statement);
  // Increment
  temp.append(": ");
  temp.append(increment);
  temp.append("\n");
  temp.append("+ ");
  temp.append(count);
  temp.append(", ");
  temp.append(count);
  temp.append(", 1\n");
  // Jump to check
  temp.append(":= ");
  temp.append(begin);
  temp.append("\n");
  // label endLoop
  temp.append(": ");
  temp.append(endLoop);
  temp.append("\n");

  (yyval.stat).code = strdup(temp.c_str());
}
#line 2131 "y.tab.c"
    break;

  case 18: /* Statement: READ Vars  */
#line 560 "mini_1.y"
{
  std::string temp = (yyvsp[0].expr).code;
  size_t pos = 0;
  do {
    pos = temp.find("|", pos);
    if (pos == std::string::npos)
      break;
    temp.replace(pos, 1, "<");
  } while (true);

  (yyval.stat).code = strdup(temp.c_str());
}
#line 2148 "y.tab.c"
    break;

  case 19: /* Statement: WRITE Vars  */
#line 573 "mini_1.y"
{
  std::string temp = (yyvsp[0].expr).code;
  size_t pos = 0;
  do {
    pos = temp.find("|", pos);
    if (pos == std::string::npos)
      break;
    temp.replace(pos, 1, ">");
  } while (true);

  (yyval.stat).code = strdup(temp.c_str());
}
#line 2165 "y.tab.c"
    break;

  case 20: /* Statement: CONTINUE  */
#line 586 "mini_1.y"
{
  // insert continue on a new line
  // search for continue in loop
  // and replace with := loop check
  std::string temp = "continue\n";
  (yyval.stat).code = strdup(temp.c_str());
}
#line 2177 "y.tab.c"
    break;

  case 21: /* Statement: RETURN Expression  */
#line 594 "mini_1.y"
{
  std::string temp;
  temp.append((yyvsp[0].expr).code);
  temp.append("ret ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");
  (yyval.stat).code = strdup(temp.c_str());
}
#line 2190 "y.tab.c"
    break;

  case 22: /* ElseStatement: %empty  */
#line 605 "mini_1.y"
{
  (yyval.stat).code = strdup(empty);
}
#line 2198 "y.tab.c"
    break;

  case 23: /* ElseStatement: ELSE Statements  */
#line 609 "mini_1.y"
{
  (yyval.stat).code = strdup((yyvsp[0].stat).code);
}
#line 2206 "y.tab.c"
    break;

  case 24: /* Var: Ident L_SQUARE_BRACKET Expression R_SQUARE_BRACKET  */
#line 614 "mini_1.y"
{
  // Check for use of undeclared variable (test 01)
  if (variables.find(std::string((yyvsp[-3].expr).place)) == variables.end()) {
    char temp[128];
    snprintf(temp, 128, "Use of undeclared variable %s", (yyvsp[-3].expr).place);
    yyerror(temp);
  }
  // Check for use of single value as array (test 07)
  else if (variables.find(std::string((yyvsp[-3].expr).place))->second == 0) {
    char temp[128];
    snprintf(temp, 128, "Indexing a non-array variable %s", (yyvsp[-3].expr).place);
    yyerror(temp);
  }

  std::string temp;
  temp.append((yyvsp[-3].expr).place);
  temp.append(", ");
  temp.append((yyvsp[-1].expr).place);

  (yyval.expr).code = strdup((yyvsp[-1].expr).code);
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).array = true;
}
#line 2234 "y.tab.c"
    break;

  case 25: /* Var: Ident  */
#line 638 "mini_1.y"
{
  // Check for use of undeclared variable (test 01)
  if (variables.find(std::string((yyvsp[0].expr).place)) == variables.end()) {
    char temp[128];
    snprintf(temp, 128, "Use of undeclared variable %s", (yyvsp[0].expr).place);
    yyerror(temp);
  }
  // Check for use of array as single value (test 06)
  else if (variables.find(std::string((yyvsp[0].expr).place))->second > 0) {
    char temp[128];
    snprintf(temp, 128, "Failed to provide index for array variable %s", (yyvsp[0].expr).place);
    yyerror(temp);
  }

  (yyval.expr).code = strdup(empty);
  (yyval.expr).place = strdup((yyvsp[0].expr).place);
  (yyval.expr).array = false;
}
#line 2257 "y.tab.c"
    break;

  case 26: /* Vars: Var  */
#line 663 "mini_1.y"
{
  std::string temp;
  temp.append((yyvsp[0].expr).code);
  if ((yyvsp[0].expr).array)
    temp.append(".[]| ");
  else
    temp.append(".| ");

  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
}
#line 2276 "y.tab.c"
    break;

  case 27: /* Vars: Var COMMA Vars  */
#line 678 "mini_1.y"
{
  std::string temp;
  temp.append((yyvsp[-2].expr).code);
  if ((yyvsp[-2].expr).array)
    temp.append(".[]| ");
  else
    temp.append(".| ");

  temp.append((yyvsp[-2].expr).place);
  temp.append("\n");
  temp.append((yyvsp[0].expr).code);

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
}
#line 2296 "y.tab.c"
    break;

  case 28: /* Expression: MultExp  */
#line 695 "mini_1.y"
{
  (yyval.expr).code = strdup((yyvsp[0].expr).code);
  (yyval.expr).place = strdup((yyvsp[0].expr).place);
}
#line 2305 "y.tab.c"
    break;

  case 29: /* Expression: MultExp ADD Expression  */
#line 700 "mini_1.y"
{
  (yyval.expr).place = strdup(newTemp().c_str());

  std::string temp;
  temp.append((yyvsp[-2].expr).code);
  temp.append((yyvsp[0].expr).code);
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append("+ ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyvsp[-2].expr).place);
  temp.append(", ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
}
#line 2329 "y.tab.c"
    break;

  case 30: /* Expression: MultExp SUB Expression  */
#line 720 "mini_1.y"
{
  (yyval.expr).place = strdup(newTemp().c_str());

  std::string temp;
  temp.append((yyvsp[-2].expr).code);
  temp.append((yyvsp[0].expr).code);
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append("- ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyvsp[-2].expr).place);
  temp.append(", ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
}
#line 2353 "y.tab.c"
    break;

  case 31: /* Expressions: %empty  */
#line 742 "mini_1.y"
{
  (yyval.expr).code = strdup(empty);
  (yyval.expr).place = strdup(empty);
}
#line 2362 "y.tab.c"
    break;

  case 32: /* Expressions: Expression COMMA Expressions  */
#line 747 "mini_1.y"
{
  std::string temp;
  temp.append((yyvsp[-2].expr).code);
  temp.append("param ");
  temp.append((yyvsp[-2].expr).place);
  temp.append("\n");
  temp.append((yyvsp[0].expr).code);

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
}
#line 2378 "y.tab.c"
    break;

  case 33: /* Expressions: Expression  */
#line 759 "mini_1.y"
{
  std::string temp;
  temp.append((yyvsp[0].expr).code);
  temp.append("param ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
}
#line 2393 "y.tab.c"
    break;

  case 34: /* MultExp: Term  */
#line 772 "mini_1.y"
{
  (yyval.expr).code = strdup((yyvsp[0].expr).code);
  (yyval.expr).place = strdup((yyvsp[0].expr).place);
}
#line 2402 "y.tab.c"
    break;

  case 35: /* MultExp: Term MULT MultExp  */
#line 777 "mini_1.y"
{
  (yyval.expr).place = strdup(newTemp().c_str());

  std::string temp;
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append((yyvsp[-2].expr).code);
  temp.append((yyvsp[0].expr).code);
  temp.append("* ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyvsp[-2].expr).place);
  temp.append(", ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
}
#line 2426 "y.tab.c"
    break;

  case 36: /* MultExp: Term DIV MultExp  */
#line 797 "mini_1.y"
{
  (yyval.expr).place = strdup(newTemp().c_str());

  std::string temp;
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append((yyvsp[-2].expr).code);
  temp.append((yyvsp[0].expr).code);
  temp.append("/ ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyvsp[-2].expr).place);
  temp.append(", ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
}
#line 2450 "y.tab.c"
    break;

  case 37: /* MultExp: Term MOD MultExp  */
#line 817 "mini_1.y"
{
  (yyval.expr).place = strdup(newTemp().c_str());

  std::string temp;
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append((yyvsp[-2].expr).code);
  temp.append((yyvsp[0].expr).code);
  temp.append("% ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyvsp[-2].expr).place);
  temp.append(", ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
}
#line 2474 "y.tab.c"
    break;

  case 38: /* Term: Var  */
#line 839 "mini_1.y"
{
  // var can be an array or not
  if ((yyval.expr).array == true) {
    std::string temp;
    std::string intermediate = newTemp();
    temp.append((yyvsp[0].expr).code);
    temp.append(". ");
    temp.append(intermediate);
    temp.append("\n");
    temp.append("=[] ");
    temp.append(intermediate);
    temp.append(", ");
    temp.append((yyvsp[0].expr).place);
    temp.append("\n");
    (yyval.expr).code = strdup(temp.c_str());
    (yyval.expr).place = strdup(intermediate.c_str());
    (yyval.expr).array = false;
  }
  else {
    (yyval.expr).code = strdup((yyvsp[0].expr).code);
    (yyval.expr).place = strdup((yyvsp[0].expr).place);
  }
}
#line 2502 "y.tab.c"
    break;

  case 39: /* Term: SUB Var  */
#line 863 "mini_1.y"
{
  // Var can either be an array or not an array
  (yyval.expr).place = strdup(newTemp().c_str());
  std::string temp;
  temp.append((yyvsp[0].expr).code);
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  if ((yyvsp[0].expr).array) {
    temp.append("=[] ");
    temp.append((yyval.expr).place);
    temp.append(", ");
    temp.append((yyvsp[0].expr).place);
    temp.append("\n");
  }
  else {
    temp.append("= ");
    temp.append((yyval.expr).place);
    temp.append(", ");
    temp.append((yyvsp[0].expr).place);
    temp.append("\n");
  }
  temp.append("* ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyval.expr).place);
  temp.append(", -1\n");

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).array = false;
}
#line 2538 "y.tab.c"
    break;

  case 40: /* Term: NUMBER  */
#line 895 "mini_1.y"
{
  (yyval.expr).code = strdup(empty);
  (yyval.expr).place = strdup(std::to_string((yyvsp[0].num_val)).c_str());
}
#line 2547 "y.tab.c"
    break;

  case 41: /* Term: SUB NUMBER  */
#line 900 "mini_1.y"
{
  std::string temp;
  temp.append("-");
  temp.append(std::to_string((yyvsp[0].num_val)));
  (yyval.expr).code = strdup(empty);
  (yyval.expr).place = strdup(temp.c_str());
}
#line 2559 "y.tab.c"
    break;

  case 42: /* Term: L_PAREN Expression R_PAREN  */
#line 908 "mini_1.y"
{
  (yyval.expr).code = strdup((yyvsp[-1].expr).code);
  (yyval.expr).place = strdup((yyvsp[-1].expr).place);
}
#line 2568 "y.tab.c"
    break;

  case 43: /* Term: SUB L_PAREN Expression R_PAREN  */
#line 913 "mini_1.y"
{
  (yyval.expr).place = strdup((yyvsp[-1].expr).place);
  std::string temp;
  temp.append((yyvsp[-1].expr).code);
  temp.append("* ");
  temp.append((yyvsp[-1].expr).place);
  temp.append(", ");
  temp.append((yyvsp[-1].expr).place);
  temp.append(", -1\n");
  (yyval.expr).code = strdup(temp.c_str());
}
#line 2584 "y.tab.c"
    break;

  case 44: /* Term: Ident L_PAREN Expressions R_PAREN  */
#line 925 "mini_1.y"
{
   // Check for use of undeclared function (test 2)
  if (functions.find(std::string((yyvsp[-3].expr).place)) == functions.end()) {
    char temp[128];
    snprintf(temp, 128, "Use of undeclared function %s", (yyvsp[-3].expr).place);
    yyerror(temp);
  }

  (yyval.expr).place = strdup(newTemp().c_str());

  std::string temp;
  temp.append((yyvsp[-1].expr).code);
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append("call ");
  temp.append((yyvsp[-3].expr).place);
  temp.append(", ");
  temp.append((yyval.expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
}
#line 2612 "y.tab.c"
    break;

  case 45: /* BoolExp: RAExp  */
#line 950 "mini_1.y"
{
  (yyval.expr).place = strdup((yyvsp[0].expr).place);
  (yyval.expr).code = strdup((yyvsp[0].expr).code);
}
#line 2621 "y.tab.c"
    break;

  case 46: /* BoolExp: RAExp OR BoolExp  */
#line 955 "mini_1.y"
{
  std::string dest = newTemp();
  std::string temp;

  temp.append((yyvsp[-2].expr).code);
  temp.append((yyvsp[0].expr).code);
  temp.append(". ");
  temp.append(dest);
  temp.append("\n");

  temp.append("|| ");
  temp.append(dest);
  temp.append(", ");
  temp.append((yyvsp[-2].expr).place);
  temp.append(", ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(dest.c_str());
}
#line 2647 "y.tab.c"
    break;

  case 47: /* RAExp: RExp  */
#line 978 "mini_1.y"
{
  (yyval.expr).place = strdup((yyvsp[0].expr).place);
  (yyval.expr).code = strdup((yyvsp[0].expr).code);
}
#line 2656 "y.tab.c"
    break;

  case 48: /* RAExp: RExp AND RAExp  */
#line 983 "mini_1.y"
{
  std::string dest = newTemp();
  std::string temp;

  temp.append((yyvsp[-2].expr).code);
  temp.append((yyvsp[0].expr).code);
  temp.append(". ");
  temp.append(dest);
  temp.append("\n");

  temp.append("&& ");
  temp.append(dest);
  temp.append(", ");
  temp.append((yyvsp[-2].expr).place);
  temp.append(", ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(dest.c_str());
}
#line 2682 "y.tab.c"
    break;

  case 49: /* RExp: NOT RExp1  */
#line 1006 "mini_1.y"
{
  std::string dest = newTemp();
  std::string temp;

  temp.append((yyvsp[0].expr).code);
  temp.append(". ");
  temp.append(dest);
  temp.append("\n");

  temp.append("! ");
  temp.append(dest);
  temp.append(", ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(dest.c_str());
}
#line 2705 "y.tab.c"
    break;

  case 50: /* RExp: RExp1  */
#line 1025 "mini_1.y"
{
  (yyval.expr).place = strdup((yyvsp[0].expr).place);
  (yyval.expr).code = strdup((yyvsp[0].expr).code);
}
#line 2714 "y.tab.c"
    break;

  case 51: /* RExp1: Expression Comp Expression  */
#line 1031 "mini_1.y"
{
  std::string dest = newTemp();
  std::string temp;

  temp.append((yyvsp[-2].expr).code);
  temp.append((yyvsp[0].expr).code);
  temp.append(". ");
  temp.append(dest);
  temp.append("\n");
  temp.append((yyvsp[-1].expr).place);
  temp.append(dest);
  temp.append(", ");
  temp.append((yyvsp[-2].expr).place);
  temp.append(", ");
  temp.append((yyvsp[0].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(dest.c_str());
}
#line 2739 "y.tab.c"
    break;

  case 52: /* RExp1: TRUE  */
#line 1052 "mini_1.y"
{
  char temp[2] = "1";
  (yyval.expr).place = strdup(temp);
  (yyval.expr).code = strdup(empty);
}
#line 2749 "y.tab.c"
    break;

  case 53: /* RExp1: FALSE  */
#line 1058 "mini_1.y"
{
  char temp[2] = "0";
  (yyval.expr).place = strdup(temp);
  (yyval.expr).code = strdup(empty);
}
#line 2759 "y.tab.c"
    break;

  case 54: /* RExp1: L_PAREN BoolExp R_PAREN  */
#line 1064 "mini_1.y"
{
  (yyval.expr).place = strdup((yyvsp[-1].expr).place);
  (yyval.expr).code = strdup((yyvsp[-1].expr).code);
}
#line 2768 "y.tab.c"
    break;

  case 55: /* Comp: EQ  */
#line 1070 "mini_1.y"
{
  std::string temp = "== ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
}
#line 2778 "y.tab.c"
    break;

  case 56: /* Comp: NEQ  */
#line 1076 "mini_1.y"
{
  std::string temp = "!= ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
}
#line 2788 "y.tab.c"
    break;

  case 57: /* Comp: LT  */
#line 1082 "mini_1.y"
{
  std::string temp = "< ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
}
#line 2798 "y.tab.c"
    break;

  case 58: /* Comp: GT  */
#line 1088 "mini_1.y"
{
  std::string temp = "> ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
}
#line 2808 "y.tab.c"
    break;

  case 59: /* Comp: LTE  */
#line 1094 "mini_1.y"
{
  std::string temp = "<= ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
}
#line 2818 "y.tab.c"
    break;

  case 60: /* Comp: GTE  */
#line 1100 "mini_1.y"
{
  std::string temp = ">= ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
}
#line 2828 "y.tab.c"
    break;

  case 61: /* Ident: IDENT  */
#line 1107 "mini_1.y"
{
  (yyval.expr).place = strdup((yyvsp[0].ident_val));
  (yyval.expr).code = strdup(empty);;
}
#line 2837 "y.tab.c"
    break;

  case 62: /* LocalIdent: IDENT  */
#line 1112 "mini_1.y"
{
  // Check for redeclaration (test 04) TODO same name as program
  std::string variable((yyvsp[0].ident_val));
  if (variables.find(variable) != variables.end()) {
    char temp[128];
    snprintf(temp, 128, "Redeclaration of variable %s", variable.c_str());
    yyerror(temp);
  }
  else {
    variables.insert(std::pair<std::string,int>(variable,0));
  }
  (yyval.expr).place = strdup((yyvsp[0].ident_val));
  (yyval.expr).code = strdup(empty);;
}
#line 2856 "y.tab.c"
    break;

  case 63: /* FunctionIdent: IDENT  */
#line 1127 "mini_1.y"
{
  if (functions.find(std::string((yyvsp[0].ident_val))) != functions.end()) {
    char temp[128];
    snprintf(temp, 128, "Redeclaration of function %s", (yyvsp[0].ident_val));
    yyerror(temp);
  }
  else {
    functions.insert(std::pair<std::string,int>((yyvsp[0].ident_val),0));
  }
  (yyval.expr).place = strdup((yyvsp[0].ident_val));
  (yyval.expr).code = strdup(empty);;
}
#line 2873 "y.tab.c"
    break;


#line 2877 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1139 "mini_1.y"


void yyerror(const char* s) {
   printf("ERROR: %s at symbol \"%s\" on line %d, col %d\n", s, yytext, lineNum, lineCol);
}

std::string newTemp() {
  static int num = 0;
  std::string temp = "_t" + std::to_string(num++);
  return temp;
}

std::string newLabel() {
  static int num = 0;
  std::string temp = 'L' + std::to_string(num++);
  return temp;
}
