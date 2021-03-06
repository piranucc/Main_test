#include "include/ft_printf.h"
#include <limits.h>
#include <locale.h>
int main(void)
{
	int ret;
	int ret1;
	setlocale(LC_ALL, "en_US.UTF-8");
/*	ret = printf("%s\n", "abc");
	ret1 = ft_printf("%s\n", "abc");
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%s\n", NULL);
	ret1 = ft_printf("%s\n", NULL);
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	printf("%i\n", 420);
	ft_printf("%i\n", 420);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("before %d after\n", 42);
	ret1 = ft_printf("before %d after\n", 42);
	printf("\n%i\n", ret);
	printf("%i\n", ret1);
	printf("\033[36m------------------\033[0m\n");
	printf("%d\n", -42);
	ft_printf("%d\n", -42);
	printf("\033[36m------------------\033[0m\n");
	printf("%+d\n", -42);
	ft_printf("%+d\n", -42);
	printf("\033[36m------------------\033[0m\n");
	printf("%+d\n", 42);
	ft_printf("%+d\n", 42);
	printf("\033[36m------------------\033[0m\n");
//	printf("%30.10d\n", 42);
//	ft_printf("%30.10d\n", 42);
	printf("%.d, %.0d\n", 0, 0);
	ft_printf("%.d, %.0d\n", 0, 0);
	printf("\033[36m------------------\033[0m\n");
	printf("{%11d}\n", 42);
	ft_printf("{%11d}\n", 42);
	printf("\033[36m------------------\033[0m\n");
	printf("{%10d}\n", 67);
	ft_printf("{%10d}\n", 67);
	printf("\033[36m------------------\033[0m\n");
	printf("{%+03d}\n", 12);
	ft_printf("{%+03d}\n", 12);
	printf("\033[36m------------------\033[0m\n");
	printf("{%+03d}\n", 0);
	ft_printf("{%+03d}\n", 0);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("{%0+5d}\n", 42);
	printf("\033[36m------------------\033[0m\n");
	ft_printf("{%0+5d}\n", 42);
	printf("\033[36m------------------\033[0m\n");
	printf("%5.0d|\n", 0);
	ft_printf("%5.0d|\n", 0);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%d\n", -2147483648);
	ret1 = ft_printf("%d\n", -2147483648);
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ft_printf("%ld\n", 2147483647);
	ft_printf("%ld\n", 2147483647);
	printf("%D%D\n", 0, 42);
	ft_printf("%D%D\n", 0, 42);
	printf("%lld%lld\n", 0, 42);
	printf("%lld%lld\n", 0, 42);
	printf("%hd\n", 32767);
	ft_printf("%hd\n", 32767);
	printf("%hd\n", -32768);
	ft_printf("%hd\n", -32768);
	ret = printf("%hd%hd\n", (short int)0, (short int)42);
	ret1 =ft_printf("%hd%hd\n", (short int)0, (short int)42);
	printf("%i|%i\n", ret, ret1);
	printf("%hd\n", SHRT_MAX);
	ft_printf("%hd\n", SHRT_MAX);
	printf("%hhd\n", CHAR_MAX + 42);
	ft_printf("%hhd\n", CHAR_MAX + 42);
	printf("%hhd\n", CHAR_MIN - 42);
	ft_printf("%hhd\n", CHAR_MIN - 42);
	printf("\033[36m------------------\033[0m\n");
	ret =printf("%zi", LLONG_MIN);
	ret1 =ft_printf("%zi", LLONG_MIN);
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	printf("%u\n", 42);
	ft_printf("%u\n", 42);
	printf("\033[36m------------------\033[0m\n");
	printf("% u\n", "4294967295");
	ft_printf("% u\n", "4294967295");
	printf("%u\n", 4294967296);
	printf("\033[36m------------------\033[0m\n");
	ft_printf("%u\n", 4294967296); 
	printf("%+u\n", 4294967295);
	ft_printf("%+u\n", 4294967295);
	printf("%.u, %.0u\n", 0, 0);
	ft_printf("%.u, %.0u\n", 0, 0);
	printf("%llu\n", "4999999999");
	ft_printf("%llu\n", "4999999999");
	printf("%hu, %hu\n", 0, USHRT_MAX);
	ft_printf("%hu, %hu\n", 0, USHRT_MAX);
	printf("%llu, %llu\n", 0, ULLONG_MAX);
	ft_printf("%llu, %llu\n", 0, ULLONG_MAX);
	printf("%hU\n", "4294967296");
	ft_printf("%hU\n", "4294967296");
	printf("%ju, %ju\n", 0, ULLONG_MAX);
	ft_printf("%ju, %ju\n", 0, ULLONG_MAX);
	printf("\033[36m------------------\033[0m\n");
	printf("%U\n", ULONG_MAX + 1 );
	ft_printf("%U\n", ULONG_MAX + 1);
	printf("%hhu / %hhu\n", SHRT_MAX + 42,  SHRT_MAX + 4200);
	ft_printf("%hhu / %hhu\n", SHRT_MAX + 42,  SHRT_MAX + 4200);
	printf("\033[36m------------------\033[0m\n");
	printf("%hu, %hu\n", 0, USHRT_MAX+100);
	ft_printf("%hu, %hu\n", 0, USHRT_MAX+100);
	printf("\033[36m------------------\033[0m\n");
	printf("%hd\n", 32768); 
	ft_printf("%hd\n", 32768); 
	printf("\033[36m------------------\033[0m\n");
	printf("%D\n", LONG_MIN);
	ft_printf("%D\n", LONG_MIN);
	printf("\033[36m------------------\033[0m\n");
	printf("%hU, %hU\n", 0, USHRT_MAX);
	ft_printf("%hU, %hU\n", 0, USHRT_MAX);
	printf("\033[36m------------------\033[0m\n");
	printf("%hhu, %hhu\n", 0, UCHAR_MAX + 42);
	ft_printf("%hhu, %hhu\n", 0, UCHAR_MAX + 42);
	printf("\033[36m------------------\033[0m\n");
	printf("%zi\n", LLONG_MIN);
	ft_printf("%zi\n", LLONG_MIN);
	printf("\033[36m------------------\033[0m\n");
	printf("%U\n", ULONG_MAX + 1);
	ft_printf("%U\n", ULONG_MAX + 1);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	ret =printf("%zi|\n", LLONG_MIN );
	ret1=ft_printf("%zi|\n", LLONG_MIN );
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	int i;
	i = 42;
	printf("%p\n", &i);
	ft_printf("%p\n", &i);
	printf("\033[36m------------------\033[0m\n");
	printf("%p\n", 0);
	ft_printf("%p\n", 0);
	printf("\033[36m------------------\033[0m\n");
	printf("%.0p, %.p\n", 0, 0);
	ft_printf("%.0p, %.p\n", 0, 0);
	printf("\033[36m------------------\033[0m\n");
	printf("%.5p\n", 0);
	ft_printf("%.5p\n", 0);
	printf("%9.2p\n", 1234);
	ft_printf("%9.2p\n", 1234);
	printf("%2.9p\n", 1234);
	ft_printf("%2.9p\n", 1234);
	printf("\033[36m------------------\033[0m\n");
	printf("% p|%+p\n", 42, 42);
	ft_printf("% p|%+p\n", 42, 42);
	printf("{%-13p}\n", &strlen);
	ft_printf("{%-13p}\n", &strlen);
//	printf("%lp\n", 42);
//	ft_printf("%lp\n", 42);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("{%5p}\n", 0);
	ft_printf("{%5p}\n", 0);
	printf("\033[36m------------------\033[0m\n");
	printf("{%-15p}\n", 0);
	ft_printf("{%-15p}\n", 0);
	printf("\033[36m------------------\033[0m\n");
	printf("{%05.5p}\n", 0);
	ft_printf("{%05.5p}\n", 0);
	printf("%x\n", 42);
	ft_printf("%x\n", 42);
	printf("%x\n", -42);    
	ft_printf("%x\n", -42);    
	printf("%10x\n", 42);
	ft_printf("%10x\n", 42);
	printf("%010x\n", 542); 
	ft_printf("%010x\n", 542); 
	printf("%#x\n", 42); 
	ft_printf("%#x\n", 42); 
	printf("%010x|\n", 542);
	ft_printf("%010x|\n", 542);
	printf("%#x\n", 0); 
	ft_printf("%#x\n", 0); 
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("%#8x\n", 42);
	ft_printf("%#8x\n", 42);
	printf("%#-08x|\n", 42);
	ft_printf("%#-08x|\n", 42);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("%#.0x|\n", 42);
	ft_printf("%#.0x|\n", 42);
	printf("%x\n", 4294967296);
	ft_printf("%x\n", 4294967296);
	printf("%X\n", 4294967296);
	ft_printf("%X\n", 4294967296);
	printf("%x\n", -42);
	ft_printf("%x\n", -42);
	printf("%5.x|\n", 0);
	ft_printf("%5.x|\n", 0);
	printf("%llx\n", 9223372036854775807); 
	ft_printf("%llx\n", 9223372036854775807); 
	printf("%hX\n", 4294967296);
	ft_printf("%hX\n", 4294967296);
	printf("%jx\n", 4294967295);
	ft_printf("%jx\n", 4294967295);
	ret = printf("%010x|\n", 542);
	ret1 = ft_printf("%010x|\n", 542);
	printf("|% X|%+X|\n", 42, 42);
	ft_printf("|% X|%+X|\n", 42, 42);
	printf("%.3i\n", 0);
	ft_printf("%.3i\n", 0);
	printf("%-3i\n", 0);
	ft_printf("%-3i\n", 0);
	printf("%2.2d\n", 5);
	ft_printf("%2.2d\n", 5);
	printf("% -6d$\n", -455);
	ft_printf("% -6d$\n", -455);
	printf("%hd|\n", 18);
	ft_printf("%hd|\n", 18);
	printf("%hi|\n", 18);
	ft_printf("%hi|\n", 18);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("%3.hp\n", (void*) 1);
//	ft_printf("%3hp\n", (void*) 1);
	printf("%#3x\n", 0);
	ft_printf("%#3x\n", 0);
	printf("%#3.1x|\n", 0);
	ft_printf("%#3.1x|\n", 0);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("{coucou%#1.3x}\n", 0);
	ft_printf("{coucou%#1.3x}\n", 0);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("|%#-+03xcoucou|\n", 0);
	ft_printf("|%#-+03xcoucou|\n", 0);
	i = 0;
	printf("|%2x|\n", i);
	ft_printf("|%2x|\n", i);
	printf("|%#3lx|\n", 1);
	ft_printf("|%#3lx|\n", 1);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("%.1s|\n", "salut");
	ft_printf("%.1s|\n", "salut");
	printf("%-10s is a string\n", "this");
	ft_printf("%-10s is a string\n", "this");
	printf("%-5.2s is a string|\n", "this");
	ft_printf("%-5.2s is a string|\n", "this");
//	printf("%c\n", 42);
//	ft_printf("%c\n", 42);

	//ft_printf("%hg\n", -512);
	ret =printf("%C|\n", 'a');
	ret1 =ft_printf("%C|\n", 'a');
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret =printf("%c|\n", -'a');
	ret1 =ft_printf("%c|\n", -'a');
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret =printf("%c|\n", -97);
	ret1 =ft_printf("%c|\n", -97);
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%c|\n", 0);
	ret1 =ft_printf("%c|\n", 0);
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret =printf("%3c|\n", 0);
	ret1 =ft_printf("%3c|\n", 0);
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret =printf("%3c|\n", -'a');
	ret1 =ft_printf("%3c|\n", -'a');
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret =printf("%.0c|\n", '0');
	ret1 =ft_printf("%.0c|\n", '0');
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret =printf("%03.3c|\n", 0x03B12);
	ret1 =ft_printf("%03.3c|\n", 0x03B12);
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret =printf("%03.3c|\n", 15122);
	ret1 =ft_printf("%03.3c|\n", 15122);
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret =printf("%c|\n", 15122);
	ret1 =ft_printf("%c|\n", 15122);
	printf("%i | %i |\n", ret, ret1);
	printf("-------------------------------\n");
	ret = printf("{%03.3c}", 0);
	ret1 = ft_printf("{%03.3c}", 0);
	printf("%i | %i |\n", ret, ret1);
	printf("-------------------------------\n");
	printf("-------------------------------\n");
	ret =printf("%03.3c|\n", 'a');
	ret1 =ft_printf("%03.3c|\n", 'a');
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret =printf("%03.3c|\n", -'a');
	ret1 =ft_printf("%03.3c|\n", -'a');
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret =printf("{%03c}", 0);
	ret1 =ft_printf("{%03c}", 0);
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	printf("-------------------------------\n");
	printf("%c\n", 0);
	ft_printf("%c\n", 0);
	printf("-------------------------------\n");
	printf("-------------------------------\n");

	ret = printf("%4.s|\n", "42");
	ret1 = ft_printf("%4.s|\n", "42");
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%S\n", L"abc");
	ret1 = ft_printf("%S\n", L"abc");
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%S\n", NULL);
	ret1 = ft_printf("%S\n", NULL);
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%S|\n",  L"我");
	ret1 = ft_printf("%S|\n",  L"我");
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("a%Sb%sc%S\n", L"我", "42", L"猫");
	ret1 = ft_printf("a%Sb%sc%S\n", L"我", "42", L"猫");
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	wchar_t buf[] = {1040, 945, 1042, 0x03B12, 0x03B12, 0x03B12, 0};
//	printf("%S\n", buf);
	ret = printf("%.15s\n", buf);
	ret1 = ft_printf("%.15s\n", buf);
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	printf("%hs\n", L"我是一只猫。");
	ft_printf("%hs\n", L"我是一只猫。");
	printf("%i | %i |\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%ls|\n", L"猫");
	ret1 = ft_printf("%ls|\n", L"猫");
	printf("%i|\n", ret);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%S", L"讠");
	printf("\033[36m------------------\033[0m\n");
	ret1 = ft_printf("%S", L"讠");
	printf("\033[36m------------------\033[0m\n");
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	wchar_t tab[] = L"a";
	char tab1[1] = "a";
	printf("%i\n", strlen(L"a"));
	printf("%i\n", ft_strlen(L"a"));
	printf("%i\n", strlen("a"));
	printf("%i\n", ft_strlen("a"));
	printf("%i\n", sizeof tab / sizeof *tab);
	printf("%i\n", sizeof tab1 / sizeof *tab1);

	printf("\033[36m------------------\033[0m\n");
	printf("%c\n", L'艵');
	ft_printf("%c\n", L'艵');
	printf("\033[36m------------------\033[0m\n");
	printf("%C\n", L'艵');
	ft_printf("%C\n", L'艵');
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%.C\n", 0);
	ret1 = ft_printf("%.C\n", 0);
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%.c\n", 0);
	ret1 = ft_printf("%.c\n", 0);
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("{%3c}\n", 0);
	ret1 = ft_printf("{%3c}", 0);
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%c\n", 353);
	ret1 = ft_printf("%c\n", 353);
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("{%03c}", 0);
	ret1 = ft_printf("{%03c}", 0);
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("{%c}", 0);
	ret1 = ft_printf("{%c}", 0);
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("{%3c}oui\n", 0);
	ret1 = ft_printf("{%3c}oui\n", 0);
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("null %c and text", 0);
	ret1 = ft_printf("null %c and text", 0);
	ret = printf("p%cs\n", 0);
	ret1 = ft_printf("f%cs\n", 0);
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%c\n", 200);
	ret1 = ft_printf("%c\n", 200);
	printf("%i|%i\n", ret, ret1);
	printf("\033[36m------------------\033[0m\n");
	printf("%x\n", 42);
	ft_printf("%x\n", 42);
	printf("\033[36m------------------\033[0m\n");
	printf("%o\n", 42);
	ft_printf("%o\n", 42);
	printf("%llO, %llO", 0, USHRT_MAX);
	ft_printf("%llO, %llO", 0, USHRT_MAX);
	printf("\033[36m------------------\033[0m\n");
	printf("%llx, %llx\n", 0, ULLONG_MAX);
	ft_printf("%llx, %llx\n", 0, ULLONG_MAX);
	printf("\033[36m------------------\033[0m\n");
	printf("%jX, %jX\n", 0, ULLONG_MAX);
	printf("\033[36m------------------\033[0m\n");
	ft_printf("%jX, %jX\n", 0, ULLONG_MAX);
	printf("%#6o\n", 2500);
	ft_printf("%#6o\n", 2500);
	printf("%#X\n", 42);
	ft_printf("%#X\n", 42);
	int	i;
	printf("%p\n", &i);
	ft_printf("%p\n", &i);
	printf("{%5p}\n", 0);
	ft_printf("{%5p}\n", 0);
	printf("%#o\n", 0);
	ft_printf("%#o\n", 0);
	printf("%#O\n", 0);
	ft_printf("%#O\n", 0);
	printf("\033[36m------------------\033[0m\n");
	printf("%#.O\n", 0);
	ft_printf("%#.O\n", 0);
	printf("%#-6o|\n", 2500);
	ft_printf("%#-6o|\n", 2500);
	printf("%-#6o|\n", 2500);
	ft_printf("%-#6o|\n", 2500);
	printf("\033[36m------------------\033[0m\n");
	printf("%O, %O\n", 0, LONG_MAX);
	ft_printf("%O, %O\n", 0, LONG_MAX);
	printf("%i\n", USHRT_MAX);
	printf("\033[36m------------------\033[0m\n");
	printf("%jX, %jX\n", 0, ULLONG_MAX);
	ft_printf("%jX, %jX\n", 0, ULLONG_MAX);
	printf("\033[36m------------------\033[0m\n");
	ret = printf("%hhC, %hhC", 0, L'米');
	ret1 = ft_printf("%hhC, %hhC", 0, L'米');
	printf("%i|%i\n", ret, ret1);*/
	printf("%o, %ho, %hho\n", 042, 0653, 076);
	ft_printf("%o, %ho, %hho\n", 042, 0653, 076);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("{%-15Z}\n", 123);
	ft_printf("{%-15Z}\n", 123);
	printf("\033[36m------------------\033[0m\n");
	printf("%s\n", "abc");
	ft_printf("%s\n", "abc");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("%");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	ft_printf("%");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
//	printf("{%05.%}\n", 0);
//	printf("{%05.%}", 0);
	printf("\033[36m------------------\033[0m\n");
	printf("{%05.%}", 0);
	ft_printf("{%05.%}", 0);
	printf("\033[36m------------------\033[0m\n");
	printf("\033[36m------------------\033[0m\n");
	printf("%#.3p\n", 1);
	ft_printf("%#.3p\n", 1);
	return (0);
}
