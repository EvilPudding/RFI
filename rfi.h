#ifndef RFI_H
#define RFI_H

#include<stdlib.h>
#include<alloca.h>
#include<string.h>
#include<stdarg.h>

#define CONCAT(a,b) a##b
#define CONCAT2(a,b) CONCAT(a,b)

#define ARGNUM(...) \
    _ARGNUM(_0, ##__VA_ARGS__, \
    62,61,60,                   \
    59,58,57,56,55,54,53,52,51,50, \
    49,48,47,46,45,44,43,42,41,40, \
    39,38,37,36,35,34,33,32,31,30, \
    29,28,27,26,25,24,23,22,21,20, \
    19,18,17,16,15,14,13,12,11,10, \
     9, 8, 7, 6, 5, 4, 3, 2, 1, 0)

#define _ARGNUM( \
     _0, _1, _2, _3, _4, _5, _6, _7, _8,_9, \
    _10,_11,_12,_13,_14,_15,_16,_17,_18,_19, \
    _20,_21,_22,_23,_24,_25,_26,_27,_28,_29, \
    _30,_31,_32,_33,_34,_35,_36,_37,_38,_39, \
    _40,_41,_42,_43,_44,_45,_46,_47,_48,_49, \
    _50,_51,_52,_53,_54,_55,_56,_57,_58,_59, \
    _60,_61,_62, N, ...) N

#define PREFIX_EACH_COMMA0()
#define PREFIX_EACH_COMMA1(pre, var) CONCAT(pre,var),
#define PREFIX_EACH_COMMA2(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA1(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA3(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA2(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA4(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA3(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA5(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA4(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA6(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA5(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA7(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA6(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA8(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA7(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA9(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA8(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA10(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA9(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA11(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA10(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA12(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA11(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA13(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA12(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA14(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA13(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA15(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA14(pre, __VA_ARGS__)
#define PREFIX_EACH_COMMA16(pre, var, ...) CONCAT(pre,var), PREFIX_EACH_COMMA15(pre, __VA_ARGS__)

#define PREFIX_EACH0()
#define PREFIX_EACH1(pre, var) CONCAT(pre,var);
#define PREFIX_EACH2(pre, var, ...) CONCAT(pre,var); PREFIX_EACH1(pre, __VA_ARGS__)
#define PREFIX_EACH3(pre, var, ...) CONCAT(pre,var); PREFIX_EACH2(pre, __VA_ARGS__)
#define PREFIX_EACH4(pre, var, ...) CONCAT(pre,var); PREFIX_EACH3(pre, __VA_ARGS__)
#define PREFIX_EACH5(pre, var, ...) CONCAT(pre,var); PREFIX_EACH4(pre, __VA_ARGS__)
#define PREFIX_EACH6(pre, var, ...) CONCAT(pre,var); PREFIX_EACH5(pre, __VA_ARGS__)
#define PREFIX_EACH7(pre, var, ...) CONCAT(pre,var); PREFIX_EACH6(pre, __VA_ARGS__)
#define PREFIX_EACH8(pre, var, ...) CONCAT(pre,var); PREFIX_EACH7(pre, __VA_ARGS__)
#define PREFIX_EACH9(pre, var, ...) CONCAT(pre,var); PREFIX_EACH8(pre, __VA_ARGS__)
#define PREFIX_EACH10(pre, var, ...) CONCAT(pre,var); PREFIX_EACH9(pre, __VA_ARGS__)
#define PREFIX_EACH11(pre, var, ...) CONCAT(pre,var); PREFIX_EACH10(pre, __VA_ARGS__)
#define PREFIX_EACH12(pre, var, ...) CONCAT(pre,var); PREFIX_EACH11(pre, __VA_ARGS__)
#define PREFIX_EACH13(pre, var, ...) CONCAT(pre,var); PREFIX_EACH12(pre, __VA_ARGS__)
#define PREFIX_EACH14(pre, var, ...) CONCAT(pre,var); PREFIX_EACH13(pre, __VA_ARGS__)
#define PREFIX_EACH15(pre, var, ...) CONCAT(pre,var); PREFIX_EACH14(pre, __VA_ARGS__)
#define PREFIX_EACH16(pre, var, ...) CONCAT(pre,var); PREFIX_EACH15(pre, __VA_ARGS__)

#define PTRS0()
#define PTRS1(var) PTR(var);
#define PTRS2(var, ...) PTR(var); PTRS1(__VA_ARGS__)
#define PTRS3(var, ...) PTR(var); PTRS2(__VA_ARGS__)
#define PTRS4(var, ...) PTR(var); PTRS3(__VA_ARGS__)
#define PTRS5(var, ...) PTR(var); PTRS4(__VA_ARGS__)
#define PTRS6(var, ...) PTR(var); PTRS5(__VA_ARGS__)
#define PTRS7(var, ...) PTR(var); PTRS6(__VA_ARGS__)
#define PTRS8(var, ...) PTR(var); PTRS7(__VA_ARGS__)
#define PTRS9(var, ...) PTR(var); PTRS8(__VA_ARGS__)
#define PTRS10(var, ...) PTR(var); PTRS9(__VA_ARGS__)
#define PTRS11(var, ...) PTR(var); PTRS10(__VA_ARGS__)
#define PTRS12(var, ...) PTR(var); PTRS11(__VA_ARGS__)
#define PTRS13(var, ...) PTR(var); PTRS12(__VA_ARGS__)
#define PTRS14(var, ...) PTR(var); PTRS13(__VA_ARGS__)
#define PTRS15(var, ...) PTR(var); PTRS14(__VA_ARGS__)
#define PTRS16(var, ...) PTR(var); PTRS15(__VA_ARGS__)

#define DEFS0()
#define DEFS1(var) DEF(var);
#define DEFS2(var, ...) DEF(var); DEFS1(__VA_ARGS__)
#define DEFS3(var, ...) DEF(var); DEFS2(__VA_ARGS__)
#define DEFS4(var, ...) DEF(var); DEFS3(__VA_ARGS__)
#define DEFS5(var, ...) DEF(var); DEFS4(__VA_ARGS__)
#define DEFS6(var, ...) DEF(var); DEFS5(__VA_ARGS__)
#define DEFS7(var, ...) DEF(var); DEFS6(__VA_ARGS__)
#define DEFS8(var, ...) DEF(var); DEFS7(__VA_ARGS__)
#define DEFS9(var, ...) DEF(var); DEFS8(__VA_ARGS__)
#define DEFS10(var, ...) DEF(var); DEFS9(__VA_ARGS__)
#define DEFS11(var, ...) DEF(var); DEFS10(__VA_ARGS__)
#define DEFS12(var, ...) DEF(var); DEFS11(__VA_ARGS__)
#define DEFS13(var, ...) DEF(var); DEFS12(__VA_ARGS__)
#define DEFS14(var, ...) DEF(var); DEFS13(__VA_ARGS__)
#define DEFS15(var, ...) DEF(var); DEFS14(__VA_ARGS__)
#define DEFS16(var, ...) DEF(var); DEFS15(__VA_ARGS__)

#define EXPAND_DEF_ARG0() ...
#define EXPAND_DEF_ARG1(type) type a
#define EXPAND_DEF_ARG2(type, ...) type b, EXPAND_DEF_ARG1(__VA_ARGS__)
#define EXPAND_DEF_ARG3(type, ...) type c, EXPAND_DEF_ARG2(__VA_ARGS__)
#define EXPAND_DEF_ARG4(type, ...) type d, EXPAND_DEF_ARG3(__VA_ARGS__)
#define EXPAND_DEF_ARG5(type, ...) type e, EXPAND_DEF_ARG4(__VA_ARGS__)
#define EXPAND_DEF_ARG6(type, ...) type f, EXPAND_DEF_ARG5(__VA_ARGS__)
#define EXPAND_DEF_ARG7(type, ...) type g, EXPAND_DEF_ARG6(__VA_ARGS__)
#define EXPAND_DEF_ARG8(type, ...) type h, EXPAND_DEF_ARG7(__VA_ARGS__)
#define EXPAND_DEF_ARG9(type, ...) type i, EXPAND_DEF_ARG9(__VA_ARGS__)
#define EXPAND_DEF_ARG10(type, ...) type j, EXPAND_DEF_ARG10(__VA_ARGS__)
#define EXPAND_DEF_ARG11(type, ...) type l, EXPAND_DEF_ARG11(__VA_ARGS__)
#define EXPAND_DEF_ARG12(type, ...) type m, EXPAND_DEF_ARG12(__VA_ARGS__)
#define EXPAND_DEF_ARG13(type, ...) type n, EXPAND_DEF_ARG13(__VA_ARGS__)
#define EXPAND_DEF_ARG14(type, ...) type o, EXPAND_DEF_ARG14(__VA_ARGS__)
#define EXPAND_DEF_ARG15(type, ...) type p, EXPAND_DEF_ARG15(__VA_ARGS__)
#define EXPAND_DEF_ARG16(type, ...) type q, EXPAND_DEF_ARG16(__VA_ARGS__)

#define istype(a,b) __builtin_types_compatible_p(a,b)
#define is(c,a,b) __builtin_choose_expr(c,a,b)
#define SSIZE(type) is(istype(type,char*), 0, sizeof(type))

#define EXPAND_CALL_ARG0()
#define EXPAND_CALL_ARG1(type) , &a, SSIZE(type)
#define EXPAND_CALL_ARG2(type, ...) , &b, SSIZE(type) EXPAND_CALL_ARG1(__VA_ARGS__)
#define EXPAND_CALL_ARG3(type, ...) , &c, SSIZE(type) EXPAND_CALL_ARG2(__VA_ARGS__)
#define EXPAND_CALL_ARG4(type, ...) , &d, SSIZE(type) EXPAND_CALL_ARG3(__VA_ARGS__)
#define EXPAND_CALL_ARG5(type, ...) , &e, SSIZE(type) EXPAND_CALL_ARG4(__VA_ARGS__)
#define EXPAND_CALL_ARG6(type, ...) , &f, SSIZE(type) EXPAND_CALL_ARG5(__VA_ARGS__)
#define EXPAND_CALL_ARG7(type, ...) , &g, SSIZE(type) EXPAND_CALL_ARG6(__VA_ARGS__)
#define EXPAND_CALL_ARG8(type, ...) , &h, SSIZE(type) EXPAND_CALL_ARG7(__VA_ARGS__)
#define EXPAND_CALL_ARG9(type, ...) , &i, SSIZE(type) EXPAND_CALL_ARG8(__VA_ARGS__)
#define EXPAND_CALL_ARG10(type, ...) , &j, SSIZE(type) EXPAND_CALL_ARG9(__VA_ARGS__)
#define EXPAND_CALL_ARG11(type, ...) , &i, SSIZE(type) EXPAND_CALL_ARG10(__VA_ARGS__)
#define EXPAND_CALL_ARG12(type, ...) , &i, SSIZE(type) EXPAND_CALL_ARG11(__VA_ARGS__)
#define EXPAND_CALL_ARG13(type, ...) , &i, SSIZE(type) EXPAND_CALL_ARG12(__VA_ARGS__)
#define EXPAND_CALL_ARG14(type, ...) , &i, SSIZE(type) EXPAND_CALL_ARG13(__VA_ARGS__)
#define EXPAND_CALL_ARG15(type, ...) , &i, SSIZE(type) EXPAND_CALL_ARG14(__VA_ARGS__)
#define EXPAND_CALL_ARG16(type, ...) , &i, SSIZE(type) EXPAND_CALL_ARG15(__VA_ARGS__)

#define EXPAND_CALL_ARG_HOST0()
#define EXPAND_CALL_ARG_HOST1(type) , a
#define EXPAND_CALL_ARG_HOST2(type, ...) , b EXPAND_CALL_ARG_HOST1(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST3(type, ...) , c EXPAND_CALL_ARG_HOST2(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST4(type, ...) , d EXPAND_CALL_ARG_HOST3(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST5(type, ...) , e EXPAND_CALL_ARG_HOST4(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST6(type, ...) , f EXPAND_CALL_ARG_HOST5(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST7(type, ...) , g EXPAND_CALL_ARG_HOST6(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST8(type, ...) , h EXPAND_CALL_ARG_HOST7(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST9(type, ...) , i EXPAND_CALL_ARG_HOST8(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST10(type, ...) , j EXPAND_CALL_ARG_HOST9(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST11(type, ...) , i EXPAND_CALL_ARG_HOST10(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST12(type, ...) , i EXPAND_CALL_ARG_HOST11(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST13(type, ...) , i EXPAND_CALL_ARG_HOST12(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST14(type, ...) , i EXPAND_CALL_ARG_HOST13(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST15(type, ...) , i EXPAND_CALL_ARG_HOST14(__VA_ARGS__)
#define EXPAND_CALL_ARG_HOST16(type, ...) , i EXPAND_CALL_ARG_HOST15(__VA_ARGS__)

#define EXPAND_DEF_ARG_HOST0()
#define EXPAND_DEF_ARG_HOST1(type) type a;parse(&buf, &a, SSIZE(type));
#define EXPAND_DEF_ARG_HOST2(type, ...) type b;parse(&buf, &b, SSIZE(type)); EXPAND_DEF_ARG_HOST1(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST3(type, ...) type c;parse(&buf, &c, SSIZE(type)); EXPAND_DEF_ARG_HOST2(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST4(type, ...) type d;parse(&buf, &d, SSIZE(type)); EXPAND_DEF_ARG_HOST3(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST5(type, ...) type e;parse(&buf, &e, SSIZE(type)); EXPAND_DEF_ARG_HOST4(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST6(type, ...) type f;parse(&buf, &f, SSIZE(type)); EXPAND_DEF_ARG_HOST5(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST7(type, ...) type g;parse(&buf, &g, SSIZE(type)); EXPAND_DEF_ARG_HOST6(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST8(type, ...) type h;parse(&buf, &h, SSIZE(type)); EXPAND_DEF_ARG_HOST7(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST9(type, ...) type i;parse(&buf, &i, SSIZE(type)); EXPAND_DEF_ARG_HOST8(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST10(type, ...) type j;parse(&buf, &j, SSIZE(type)); EXPAND_DEF_ARG_HOST9(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST11(type, ...) type k;parse(&buf, &k, SSIZE(type)); EXPAND_DEF_ARG_HOST10(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST12(type, ...) type l;parse(&buf, &l, SSIZE(type)); EXPAND_DEF_ARG_HOST11(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST13(type, ...) type m;parse(&buf, &m, SSIZE(type)); EXPAND_DEF_ARG_HOST12(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST14(type, ...) type n;parse(&buf, &n, SSIZE(type)); EXPAND_DEF_ARG_HOST13(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST15(type, ...) type o;parse(&buf, &o, SSIZE(type)); EXPAND_DEF_ARG_HOST14(__VA_ARGS__)
#define EXPAND_DEF_ARG_HOST16(type, ...) type p;parse(&buf, &p, SSIZE(type)); EXPAND_DEF_ARG_HOST15(__VA_ARGS__)

#define DEFIT(var) DEF_##var
#define EXPAND_DEF0(name, ...)
#define EXPAND_DEF1(name, var)		void CONCAT2(name##_,DEFIT(var));
#define EXPAND_DEF2(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF1(name, __VA_ARGS__)
#define EXPAND_DEF3(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF2(name, __VA_ARGS__)
#define EXPAND_DEF4(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF3(name, __VA_ARGS__)
#define EXPAND_DEF5(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF4(name, __VA_ARGS__)
#define EXPAND_DEF6(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF5(name, __VA_ARGS__)
#define EXPAND_DEF7(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF6(name, __VA_ARGS__)
#define EXPAND_DEF8(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF7(name, __VA_ARGS__)
#define EXPAND_DEF9(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF8(name, __VA_ARGS__)
#define EXPAND_DEF10(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF9(name, __VA_ARGS__)
#define EXPAND_DEF11(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF10(name, __VA_ARGS__)
#define EXPAND_DEF12(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF11(name, __VA_ARGS__)
#define EXPAND_DEF13(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF12(name, __VA_ARGS__)
#define EXPAND_DEF14(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF13(name, __VA_ARGS__)
#define EXPAND_DEF15(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF14(name, __VA_ARGS__)
#define EXPAND_DEF16(name, var, ...) void CONCAT2(name##_,DEFIT(var)); EXPAND_DEF15(name, __VA_ARGS__)

#define ASSIT(var) ASS_##var
#define EXPAND_ASS0()
#define EXPAND_ASS1(name, var) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var));
#define EXPAND_ASS2(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS1(name, __VA_ARGS__)
#define EXPAND_ASS3(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS2(name, __VA_ARGS__)
#define EXPAND_ASS4(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS3(name, __VA_ARGS__)
#define EXPAND_ASS5(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS4(name, __VA_ARGS__)
#define EXPAND_ASS6(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS5(name, __VA_ARGS__)
#define EXPAND_ASS7(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS6(name, __VA_ARGS__)
#define EXPAND_ASS8(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS7(name, __VA_ARGS__)
#define EXPAND_ASS9(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS8(name, __VA_ARGS__)
#define EXPAND_ASS10(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS9(name, __VA_ARGS__)
#define EXPAND_ASS11(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS10(name, __VA_ARGS__)
#define EXPAND_ASS12(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS11(name, __VA_ARGS__)
#define EXPAND_ASS13(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS12(name, __VA_ARGS__)
#define EXPAND_ASS14(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS13(name, __VA_ARGS__)
#define EXPAND_ASS15(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS14(name, __VA_ARGS__)
#define EXPAND_ASS16(name, var, ...) this->ASSIT(var) = CONCAT2(name##_,ASSIT(var)); EXPAND_ASS15(name, __VA_ARGS__)

#define CALL(f, ...) f(__VA_ARGS__)
#define CALL2(...) CALL(__VA_ARGS__)
#define EXPAND(...) __VA_ARGS__

#define __DEF_REM_PTRS(name, f, ...) \
	void (*name)(void *, f(__VA_ARGS__))
#define _DEF_REM_PTRS(name, num, ...) \
	__DEF_REM_PTRS(name, EXPAND_DEF_ARG##num, ##__VA_ARGS__)
#define DEF_REM_PTRS(name, num, ...) _DEF_REM_PTRS(name, num, ##__VA_ARGS__)

#define __DEF_REM_FUNC(name, num, fd, fc, ...) \
	name(void *data, fd(__VA_ARGS__)) \
	{ \
		const char f_name[] = #name "#"; \
		RFI_Server *serv = data; \
		size_t total_size = get_size(num * 2 fc(__VA_ARGS__)) + sizeof(f_name) - 1; \
		char *buffer_head = alloca(total_size); \
		char *buffer = buffer_head; \
		memcpy(buffer, f_name, sizeof(f_name)); buffer += sizeof(f_name)-1; \
		to_buffer(buffer, num * 2 fc(__VA_ARGS__) ); \
		serv->send_function(serv->send_data, buffer_head, total_size); \
	};

#define _DEF_REM_FUNC(name, num, ...) \
	__DEF_REM_FUNC(name, num, EXPAND_DEF_ARG##num, EXPAND_CALL_ARG##num, ##__VA_ARGS__)
#define DEF_REM_FUNC(name, num, ...) _DEF_REM_FUNC(name, num, ##__VA_ARGS__) \

#define DEF_REMOTE_FUNC(name, ...) DEF_REM_FUNC(name, ARGNUM(__VA_ARGS__),##__VA_ARGS__)
#define PTR_REMOTE_FUNC(name, ...) DEF_REM_PTRS(name, ARGNUM(__VA_ARGS__),##__VA_ARGS__)
#define ASS_REMOTE_FUNC(name, ...) name

#define _GEN_ASSIGNMENT(f, name, ...) f(name, ##__VA_ARGS__)
#define _GEN_DEFINITION(f, name, ...) f(name, ##__VA_ARGS__)
#define GEN_ASSIGNMENT(num, name, ...) _GEN_ASSIGNMENT(EXPAND_ASS##num, name, ##__VA_ARGS__)
#define GEN_DEFINITION(num, name, ...) _GEN_DEFINITION(EXPAND_DEF##num, name, ##__VA_ARGS__)

#define __DEF_SHR_FUNC(name, num, fd, fc, ...) \
	void SHARED_##name(void *client, char *buf) \
	{ \
		fd(__VA_ARGS__) /* parse here */ \
		name(client fc(__VA_ARGS__)); \
	}

#define _DEF_SHR_FUNC(name, num, ...) \
	__DEF_SHR_FUNC(name, num, EXPAND_DEF_ARG_HOST##num, EXPAND_CALL_ARG_HOST##num, ##__VA_ARGS__)
#define DEF_SHR_FUNC(name, num, ...) \
	_DEF_SHR_FUNC(name, num, ##__VA_ARGS__)

#define __DEF_SHR_PTRS(name, num, ...) \
	{#name, SHARED_##name}

#define _DEF_SHR_PTRS(name, num, ...) \
	__DEF_SHR_PTRS(name, num, ##__VA_ARGS__)

#define DEF_SHR_PTRS(name, num, ...) _DEF_SHR_PTRS(name, num, ##__VA_ARGS__)

#define PTR_SHARED_FUNC(name, ...) DEF_SHR_PTRS(name, ARGNUM(__VA_ARGS__),##__VA_ARGS__)
#define DEF_SHARED_FUNC(name, ...) DEF_SHR_FUNC(name, ARGNUM(__VA_ARGS__),##__VA_ARGS__)

#define  REMOTE_COMMON \
	void(*send_function)(void*, char*,size_t); \
	void *send_data

typedef struct
{
	char name[100];
	void(*func)(void*, char*);
} FUNC;

typedef struct
{
	REMOTE_COMMON;
} RFI_Server;

static inline void to_buffer(char *, int, ...);
static inline size_t get_size(int, ...);

#define _HOST(name, num, ...) \
	EXPAND(CALL(CONCAT(PREFIX_EACH,num), DEF_, ##__VA_ARGS__)) \
	const FUNC const funcs[] = { \
		EXPAND(CALL(CONCAT(PREFIX_EACH_COMMA,num), PTR_, ##__VA_ARGS__)) {"",NULL} \
	}

#define _REMOTE_HEADER(name, num, ...) \
	typedef struct { REMOTE_COMMON; \
		EXPAND(CALL(CONCAT(PREFIX_EACH,num), PTR_, ##__VA_ARGS__)) \
	} name; \
	name *CONCAT(name,_new)(void(*)(void*,char*,size_t), void*); \
	void CONCAT(name,_free)(name*);

#define _REMOTE_OBJECT(name, num, ...) \
	GEN_DEFINITION(num, name, ##__VA_ARGS__) \
	name *CONCAT(name,_new)(void(*send_function)(void*,char*,size_t), void *send_data) \
	{ \
		name *this = (name*)malloc(sizeof(*this)); \
		this->send_function = send_function; \
		this->send_data = send_data; \
		GEN_ASSIGNMENT(num, name, ##__VA_ARGS__) \
		return this; \
	} \
	void CONCAT(name,_free)(name *this) \
	{ \
		free(this); \
	}


#define _REMOTE(name, num, ...) \
	_REMOTE_HEADER(name, num, ##__VA_ARGS__) \
	_REMOTE_OBJECT(name, num, ##__VA_ARGS__)

#define REMOTE(name, ...)	_REMOTE(name, ARGNUM(__VA_ARGS__), ##__VA_ARGS__)
#define REMOTE_HEADER(name, ...)	_REMOTE_HEADER(name, ARGNUM(__VA_ARGS__), ##__VA_ARGS__)
#define REMOTE_OBJECT(name, ...)	_REMOTE_OBJECT(name, ARGNUM(__VA_ARGS__), ##__VA_ARGS__)

#define HOST_HEADER(hname) void CONCAT(hname,_called)(void*, char*, size_t);
#define HOST(hname, ...) \
void CONCAT(hname,_called)(void *data, char *function, size_t size) \
{ \
	_HOST(hname, ARGNUM(__VA_ARGS__), ##__VA_ARGS__); \
	char *args = strchr(function, '#') + 1; \
	args[-1] = '\0'; \
	const FUNC * f = funcs; \
	while(f->func) \
	{ \
		if(!strcmp(function, f->name)) \
		{ \
			f->func(data, args); \
			return; \
		} \
		f++; \
	} \
}

/* DOT_C */
static inline size_t write_to_buffer(char *buffer, void *ptr, size_t size)
{
	if(size == 0) /* IS STRING */
	{
		char *str = (*(char**)ptr)?:"";
		size = strlen(str) + 1;
		memcpy(buffer, str, size);
	}
	else
	{
		memcpy(buffer, ptr, size);
	}
	return size;
}

static inline size_t get_size(int n, ...)
{
	va_list va;
	va_start(va, n);
	size_t total_size = 0;
	while(n)
	{
		void *data = va_arg(va, void*);
		size_t size = va_arg(va, size_t);
		if(!size)
		{
			size = strlen(*(char**)data) + 1;
		}
		total_size += size;
		n -= 2;
	}
	return total_size;
}

static inline void to_buffer(char *buffer, int n, ...)
{
	va_list va;
	va_start(va, n);
	size_t len = 0;
	while(n)
	{
		void *data = va_arg(va, void*);
		size_t size = write_to_buffer(buffer + len, data, va_arg(va, size_t));

		len += size;
		n -= 2;
	}
	buffer[len] = '\0';

	va_end(va);
}

static inline void parse(char **buf, void *ptr, size_t size)
{
	if(size == 0) /* IS STRING */
	{
		*(char**)ptr = *buf;
		size = strlen(*buf) + 1;
	}
	else
	{
		memcpy(ptr, (*buf), size);
	}
	(*buf) += size;
}

/* !DOT_C */


#endif /* !RFI_H */
