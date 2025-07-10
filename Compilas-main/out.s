# FIXED INIT
.text
.section .rodata
printintstr: .string "%d\n"
printfloatstr: .string "%f\n"
printcharstr: .string "%c\n"
printstringstr: .string "%s\n"
.text
	# BEGIN_FUN
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
# TAC_LABEL ______Label_____var_0
______Label_____var_0:
# TAC_GRT
	movl	_cont,	%eax
	cmpl	__1,	%eax
	setg	%al
	movzbl	%al,	%eax
	movl	%eax,	_______Temp_____var_0
# TAC_JFALSE (if !______Temp_____var_0 goto ______Label_____var_1)
	movl	_______Temp_____var_0(%rip), %eax
	cmpl	$0, %eax
	je	______Label_____var_1
# TAC COPY x = _21
	movl	__21(%rip), %eax
	movl	%eax, _x(%rip)
# TAC COPY y = _6
	movl	__6(%rip), %eax
	movl	%eax, _y(%rip)
# TAC COPY z = _63
	movl	__63(%rip), %eax
	movl	%eax, _z(%rip)
# TAC COPY w = _21
	movl	__21(%rip), %eax
	movl	%eax, _w(%rip)
# TAC COPY j = _06
	movl	__06(%rip), %eax
	movl	%eax, _j(%rip)
# TAC COPY h = _81
	movl	__81(%rip), %eax
	movl	%eax, _h(%rip)
# TAC COPY k = _48
	movl	__48(%rip), %eax
	movl	%eax, _k(%rip)
# TAC COPY l = _42
	movl	__42(%rip), %eax
	movl	%eax, _l(%rip)
# TAC COPY m = _801
	movl	__801(%rip), %eax
	movl	%eax, _m(%rip)
# TAC COPY n = _21
	movl	__21(%rip), %eax
	movl	%eax, _n(%rip)
# TAC COPY o = _231
	movl	__231(%rip), %eax
	movl	%eax, _o(%rip)
# TAC COPY p = _63
	movl	__63(%rip), %eax
	movl	%eax, _p(%rip)
# TAC COPY q = _651
	movl	__651(%rip), %eax
	movl	%eax, _q(%rip)
# TAC COPY r = _24
	movl	__24(%rip), %eax
	movl	%eax, _r(%rip)
# TAC COPY s = _081
	movl	__081(%rip), %eax
	movl	%eax, _s(%rip)
# TAC COPY t = _84
	movl	__84(%rip), %eax
	movl	%eax, _t(%rip)
# TAC_ADD
	movl	_x(%rip), %edx
	movl	_y(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_49(%rip)
# TAC_ADD
	movl	_______Temp_____var_49(%rip), %edx
	movl	_z(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_50(%rip)
# TAC_ADD
	movl	_______Temp_____var_50(%rip), %edx
	movl	_w(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_51(%rip)
# TAC COPY a = ______Temp_____var_51
	movl	_______Temp_____var_51(%rip), %eax
	movl	%eax, _a(%rip)
# TAC_ADD
	movl	_j(%rip), %edx
	movl	_h(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_52(%rip)
# TAC_ADD
	movl	_______Temp_____var_52(%rip), %edx
	movl	_k(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_53(%rip)
# TAC_ADD
	movl	_______Temp_____var_53(%rip), %edx
	movl	_l(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_54(%rip)
# TAC COPY b = ______Temp_____var_54
	movl	_______Temp_____var_54(%rip), %eax
	movl	%eax, _b(%rip)
# TAC_ADD
	movl	_m(%rip), %edx
	movl	_n(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_55(%rip)
# TAC_ADD
	movl	_______Temp_____var_55(%rip), %edx
	movl	_o(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_56(%rip)
# TAC_ADD
	movl	_______Temp_____var_56(%rip), %edx
	movl	_p(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_57(%rip)
# TAC COPY c = ______Temp_____var_57
	movl	_______Temp_____var_57(%rip), %eax
	movl	%eax, _c(%rip)
# TAC_ADD
	movl	_q(%rip), %edx
	movl	_r(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_58(%rip)
# TAC_ADD
	movl	_______Temp_____var_58(%rip), %edx
	movl	_s(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_59(%rip)
# TAC_ADD
	movl	_______Temp_____var_59(%rip), %edx
	movl	_t(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_60(%rip)
# TAC COPY d = ______Temp_____var_60
	movl	_______Temp_____var_60(%rip), %eax
	movl	%eax, _d(%rip)
# TAC_ADD
	movl	_x(%rip), %edx
	movl	_j(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_61(%rip)
# TAC_ADD
	movl	_______Temp_____var_61(%rip), %edx
	movl	_m(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_62(%rip)
# TAC_ADD
	movl	_______Temp_____var_62(%rip), %edx
	movl	_q(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_63(%rip)
# TAC COPY e = ______Temp_____var_63
	movl	_______Temp_____var_63(%rip), %eax
	movl	%eax, _e(%rip)
# TAC_ADD
	movl	_y(%rip), %edx
	movl	_h(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_64(%rip)
# TAC_ADD
	movl	_______Temp_____var_64(%rip), %edx
	movl	_n(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_65(%rip)
# TAC_ADD
	movl	_______Temp_____var_65(%rip), %edx
	movl	_r(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_66(%rip)
# TAC COPY f = ______Temp_____var_66
	movl	_______Temp_____var_66(%rip), %eax
	movl	%eax, _f(%rip)
# TAC_ADD
	movl	_z(%rip), %edx
	movl	_k(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_67(%rip)
# TAC_ADD
	movl	_______Temp_____var_67(%rip), %edx
	movl	_o(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_68(%rip)
# TAC_ADD
	movl	_______Temp_____var_68(%rip), %edx
	movl	_s(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_69(%rip)
# TAC COPY g = ______Temp_____var_69
	movl	_______Temp_____var_69(%rip), %eax
	movl	%eax, _g(%rip)
# TAC_ADD
	movl	_w(%rip), %edx
	movl	_l(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_70(%rip)
# TAC_ADD
	movl	_______Temp_____var_70(%rip), %edx
	movl	_p(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_71(%rip)
# TAC_ADD
	movl	_______Temp_____var_71(%rip), %edx
	movl	_t(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_72(%rip)
# TAC COPY i = ______Temp_____var_72
	movl	_______Temp_____var_72(%rip), %eax
	movl	%eax, _i(%rip)
# TAC_ADD
	movl	_a(%rip), %edx
	movl	_b(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_73(%rip)
# TAC_ADD
	movl	_______Temp_____var_73(%rip), %edx
	movl	_c(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_74(%rip)
# TAC_ADD
	movl	_______Temp_____var_74(%rip), %edx
	movl	_d(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_75(%rip)
# TAC COPY r1 = ______Temp_____var_75
	movl	_______Temp_____var_75(%rip), %eax
	movl	%eax, _r1(%rip)
# TAC_ADD
	movl	_e(%rip), %edx
	movl	_f(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_76(%rip)
# TAC_ADD
	movl	_______Temp_____var_76(%rip), %edx
	movl	_g(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_77(%rip)
# TAC_ADD
	movl	_______Temp_____var_77(%rip), %edx
	movl	_i(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_78(%rip)
# TAC COPY r2 = ______Temp_____var_78
	movl	_______Temp_____var_78(%rip), %eax
	movl	%eax, _r2(%rip)
# TAC_ADD
	movl	_a(%rip), %edx
	movl	_e(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_79(%rip)
# TAC_ADD
	movl	_______Temp_____var_79(%rip), %edx
	movl	_b(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_80(%rip)
# TAC_ADD
	movl	_______Temp_____var_80(%rip), %edx
	movl	_f(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_81(%rip)
# TAC COPY r3 = ______Temp_____var_81
	movl	_______Temp_____var_81(%rip), %eax
	movl	%eax, _r3(%rip)
# TAC_ADD
	movl	_c(%rip), %edx
	movl	_g(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_82(%rip)
# TAC_ADD
	movl	_______Temp_____var_82(%rip), %edx
	movl	_d(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_83(%rip)
# TAC_ADD
	movl	_______Temp_____var_83(%rip), %edx
	movl	_i(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_84(%rip)
# TAC COPY r4 = ______Temp_____var_84
	movl	_______Temp_____var_84(%rip), %eax
	movl	%eax, _r4(%rip)
# TAC_ADD
	movl	_r1(%rip), %edx
	movl	_r2(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_85(%rip)
# TAC_ADD
	movl	_______Temp_____var_85(%rip), %edx
	movl	_r3(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_86(%rip)
# TAC_ADD
	movl	_______Temp_____var_86(%rip), %edx
	movl	_r4(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_87(%rip)
# TAC_ADD
	movl	_______Temp_____var_87(%rip), %edx
	movl	_x(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_88(%rip)
# TAC_ADD
	movl	_______Temp_____var_88(%rip), %edx
	movl	_y(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_89(%rip)
# TAC_ADD
	movl	_______Temp_____var_89(%rip), %edx
	movl	_z(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_90(%rip)
# TAC_ADD
	movl	_______Temp_____var_90(%rip), %edx
	movl	_w(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_91(%rip)
# TAC_ADD
	movl	_______Temp_____var_91(%rip), %edx
	movl	_j(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_92(%rip)
# TAC_ADD
	movl	_______Temp_____var_92(%rip), %edx
	movl	_h(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_93(%rip)
# TAC_ADD
	movl	_______Temp_____var_93(%rip), %edx
	movl	_k(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_94(%rip)
# TAC_ADD
	movl	_______Temp_____var_94(%rip), %edx
	movl	_l(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_95(%rip)
# TAC_ADD
	movl	_______Temp_____var_95(%rip), %edx
	movl	_m(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_96(%rip)
# TAC_ADD
	movl	_______Temp_____var_96(%rip), %edx
	movl	_n(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_97(%rip)
# TAC_ADD
	movl	_______Temp_____var_97(%rip), %edx
	movl	_o(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_98(%rip)
# TAC_ADD
	movl	_______Temp_____var_98(%rip), %edx
	movl	_p(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_99(%rip)
# TAC_ADD
	movl	_______Temp_____var_99(%rip), %edx
	movl	_q(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_100(%rip)
# TAC_ADD
	movl	_______Temp_____var_100(%rip), %edx
	movl	_r(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_101(%rip)
# TAC_ADD
	movl	_______Temp_____var_101(%rip), %edx
	movl	_s(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_102(%rip)
# TAC_ADD
	movl	_______Temp_____var_102(%rip), %edx
	movl	_t(%rip), %eax
	addl	%edx, %eax
	movl	%eax, _______Temp_____var_103(%rip)
# TAC COPY res = ______Temp_____var_103
	movl	_______Temp_____var_103(%rip), %eax
	movl	%eax, _res(%rip)
# TAC_SUB
	movl	_cont(%rip),	%eax
	subl	__1(%rip),	%eax
	movl	%eax,	_______Temp_____var_104(%rip)
# TAC COPY cont = ______Temp_____var_104
	movl	_______Temp_____var_104(%rip), %eax
	movl	%eax, _cont(%rip)
# TAC_JUMP (goto ______Label_____var_0)
	jmp	______Label_____var_0
# TAC_LABEL ______Label_____var_1
______Label_____var_1:
# TAC PRINT
	movl	_res(%rip), %esi
	leaq	printintstr(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax;
	# TAC_ENDFUN
	popq	%rbp
	ret
.section .data
# DATA SECTION
.globl __0
__0:	.long	0
.globl __000000001
__000000001:	.long	100000000
.globl __01
__01:	.long	10
.globl __02
__02:	.long	20
.globl __03
__03:	.long	30
.globl __04
__04:	.long	40
.globl __06
__06:	.long	60
.globl __081
__081:	.long	180
.globl __1
__1:	.long	1
.globl __11
__11:	.long	11
.globl __12
__12:	.long	21
.globl __19
__19:	.long	91
.globl __2
__2:	.long	2
.globl __21
__21:	.long	12
.globl __22
__22:	.long	22
.globl __23
__23:	.long	32
.globl __231
__231:	.long	132
.globl __24
__24:	.long	42
.globl __3
__3:	.long	3
.globl __31
__31:	.long	13
.globl __36
__36:	.long	63
.globl __4
__4:	.long	4
.globl __41
__41:	.long	14
.globl __42
__42:	.long	24
.globl __48
__48:	.long	84
.globl __5
__5:	.long	5
.globl __501
__501:	.long	105
.globl __51
__51:	.long	15
.globl __52
__52:	.long	25
.globl __53
__53:	.long	35
.globl __54
__54:	.long	45
.globl __55
__55:	.long	55
.globl __56
__56:	.long	65
.globl __57
__57:	.long	75
.globl __6
__6:	.long	6
.globl __61
__61:	.long	16
.globl __62
__62:	.long	26
.globl __63
__63:	.long	36
.globl __651
__651:	.long	156
.globl __7
__7:	.long	7
.globl __77
__77:	.long	77
.globl __8
__8:	.long	8
.globl __801
__801:	.long	108
.globl __81
__81:	.long	18
.globl __82
__82:	.long	28
.globl __84
__84:	.long	48
.globl __9
__9:	.long	9
.globl __94
__94:	.long	49
.globl _______Label_____var_0
_______Label_____var_0:	.long	0
.globl _______Label_____var_1
_______Label_____var_1:	.long	0
.globl _______Temp_____var_0
_______Temp_____var_0:	.long	0
.globl _______Temp_____var_1
_______Temp_____var_1:	.long	0
.globl _______Temp_____var_10
_______Temp_____var_10:	.long	0
.globl _______Temp_____var_100
_______Temp_____var_100:	.long	0
.globl _______Temp_____var_101
_______Temp_____var_101:	.long	0
.globl _______Temp_____var_102
_______Temp_____var_102:	.long	0
.globl _______Temp_____var_103
_______Temp_____var_103:	.long	0
.globl _______Temp_____var_104
_______Temp_____var_104:	.long	0
.globl _______Temp_____var_11
_______Temp_____var_11:	.long	0
.globl _______Temp_____var_12
_______Temp_____var_12:	.long	0
.globl _______Temp_____var_13
_______Temp_____var_13:	.long	0
.globl _______Temp_____var_14
_______Temp_____var_14:	.long	0
.globl _______Temp_____var_15
_______Temp_____var_15:	.long	0
.globl _______Temp_____var_16
_______Temp_____var_16:	.long	0
.globl _______Temp_____var_17
_______Temp_____var_17:	.long	0
.globl _______Temp_____var_18
_______Temp_____var_18:	.long	0
.globl _______Temp_____var_19
_______Temp_____var_19:	.long	0
.globl _______Temp_____var_2
_______Temp_____var_2:	.long	0
.globl _______Temp_____var_20
_______Temp_____var_20:	.long	0
.globl _______Temp_____var_21
_______Temp_____var_21:	.long	0
.globl _______Temp_____var_22
_______Temp_____var_22:	.long	0
.globl _______Temp_____var_23
_______Temp_____var_23:	.long	0
.globl _______Temp_____var_24
_______Temp_____var_24:	.long	0
.globl _______Temp_____var_25
_______Temp_____var_25:	.long	0
.globl _______Temp_____var_26
_______Temp_____var_26:	.long	0
.globl _______Temp_____var_27
_______Temp_____var_27:	.long	0
.globl _______Temp_____var_28
_______Temp_____var_28:	.long	0
.globl _______Temp_____var_29
_______Temp_____var_29:	.long	0
.globl _______Temp_____var_3
_______Temp_____var_3:	.long	0
.globl _______Temp_____var_30
_______Temp_____var_30:	.long	0
.globl _______Temp_____var_31
_______Temp_____var_31:	.long	0
.globl _______Temp_____var_32
_______Temp_____var_32:	.long	0
.globl _______Temp_____var_33
_______Temp_____var_33:	.long	0
.globl _______Temp_____var_34
_______Temp_____var_34:	.long	0
.globl _______Temp_____var_35
_______Temp_____var_35:	.long	0
.globl _______Temp_____var_36
_______Temp_____var_36:	.long	0
.globl _______Temp_____var_37
_______Temp_____var_37:	.long	0
.globl _______Temp_____var_38
_______Temp_____var_38:	.long	0
.globl _______Temp_____var_39
_______Temp_____var_39:	.long	0
.globl _______Temp_____var_4
_______Temp_____var_4:	.long	0
.globl _______Temp_____var_40
_______Temp_____var_40:	.long	0
.globl _______Temp_____var_41
_______Temp_____var_41:	.long	0
.globl _______Temp_____var_42
_______Temp_____var_42:	.long	0
.globl _______Temp_____var_43
_______Temp_____var_43:	.long	0
.globl _______Temp_____var_44
_______Temp_____var_44:	.long	0
.globl _______Temp_____var_45
_______Temp_____var_45:	.long	0
.globl _______Temp_____var_46
_______Temp_____var_46:	.long	0
.globl _______Temp_____var_47
_______Temp_____var_47:	.long	0
.globl _______Temp_____var_48
_______Temp_____var_48:	.long	0
.globl _______Temp_____var_49
_______Temp_____var_49:	.long	0
.globl _______Temp_____var_5
_______Temp_____var_5:	.long	0
.globl _______Temp_____var_50
_______Temp_____var_50:	.long	0
.globl _______Temp_____var_51
_______Temp_____var_51:	.long	0
.globl _______Temp_____var_52
_______Temp_____var_52:	.long	0
.globl _______Temp_____var_53
_______Temp_____var_53:	.long	0
.globl _______Temp_____var_54
_______Temp_____var_54:	.long	0
.globl _______Temp_____var_55
_______Temp_____var_55:	.long	0
.globl _______Temp_____var_56
_______Temp_____var_56:	.long	0
.globl _______Temp_____var_57
_______Temp_____var_57:	.long	0
.globl _______Temp_____var_58
_______Temp_____var_58:	.long	0
.globl _______Temp_____var_59
_______Temp_____var_59:	.long	0
.globl _______Temp_____var_6
_______Temp_____var_6:	.long	0
.globl _______Temp_____var_60
_______Temp_____var_60:	.long	0
.globl _______Temp_____var_61
_______Temp_____var_61:	.long	0
.globl _______Temp_____var_62
_______Temp_____var_62:	.long	0
.globl _______Temp_____var_63
_______Temp_____var_63:	.long	0
.globl _______Temp_____var_64
_______Temp_____var_64:	.long	0
.globl _______Temp_____var_65
_______Temp_____var_65:	.long	0
.globl _______Temp_____var_66
_______Temp_____var_66:	.long	0
.globl _______Temp_____var_67
_______Temp_____var_67:	.long	0
.globl _______Temp_____var_68
_______Temp_____var_68:	.long	0
.globl _______Temp_____var_69
_______Temp_____var_69:	.long	0
.globl _______Temp_____var_7
_______Temp_____var_7:	.long	0
.globl _______Temp_____var_70
_______Temp_____var_70:	.long	0
.globl _______Temp_____var_71
_______Temp_____var_71:	.long	0
.globl _______Temp_____var_72
_______Temp_____var_72:	.long	0
.globl _______Temp_____var_73
_______Temp_____var_73:	.long	0
.globl _______Temp_____var_74
_______Temp_____var_74:	.long	0
.globl _______Temp_____var_75
_______Temp_____var_75:	.long	0
.globl _______Temp_____var_76
_______Temp_____var_76:	.long	0
.globl _______Temp_____var_77
_______Temp_____var_77:	.long	0
.globl _______Temp_____var_78
_______Temp_____var_78:	.long	0
.globl _______Temp_____var_79
_______Temp_____var_79:	.long	0
.globl _______Temp_____var_8
_______Temp_____var_8:	.long	0
.globl _______Temp_____var_80
_______Temp_____var_80:	.long	0
.globl _______Temp_____var_81
_______Temp_____var_81:	.long	0
.globl _______Temp_____var_82
_______Temp_____var_82:	.long	0
.globl _______Temp_____var_83
_______Temp_____var_83:	.long	0
.globl _______Temp_____var_84
_______Temp_____var_84:	.long	0
.globl _______Temp_____var_85
_______Temp_____var_85:	.long	0
.globl _______Temp_____var_86
_______Temp_____var_86:	.long	0
.globl _______Temp_____var_87
_______Temp_____var_87:	.long	0
.globl _______Temp_____var_88
_______Temp_____var_88:	.long	0
.globl _______Temp_____var_89
_______Temp_____var_89:	.long	0
.globl _______Temp_____var_9
_______Temp_____var_9:	.long	0
.globl _______Temp_____var_90
_______Temp_____var_90:	.long	0
.globl _______Temp_____var_91
_______Temp_____var_91:	.long	0
.globl _______Temp_____var_92
_______Temp_____var_92:	.long	0
.globl _______Temp_____var_93
_______Temp_____var_93:	.long	0
.globl _______Temp_____var_94
_______Temp_____var_94:	.long	0
.globl _______Temp_____var_95
_______Temp_____var_95:	.long	0
.globl _______Temp_____var_96
_______Temp_____var_96:	.long	0
.globl _______Temp_____var_97
_______Temp_____var_97:	.long	0
.globl _______Temp_____var_98
_______Temp_____var_98:	.long	0
.globl _______Temp_____var_99
_______Temp_____var_99:	.long	0
.globl _a
_a:	.long	0
.globl _b
_b:	.long	0
.globl _c
_c:	.long	0
.globl _cont
_cont:	.long	100000000
.globl _d
_d:	.long	0
.globl _e
_e:	.long	0
.globl _f
_f:	.long	0
.globl _g
_g:	.long	0
.globl _h
_h:	.long	0
.globl _i
_i:	.long	0
.globl _j
_j:	.long	0
.globl _k
_k:	.long	0
.globl _l
_l:	.long	0
.globl _m
_m:	.long	0
.globl _main
_main:	.long	0
.globl _n
_n:	.long	0
.globl _o
_o:	.long	0
.globl _p
_p:	.long	0
.globl _q
_q:	.long	0
.globl _r
_r:	.long	0
.globl _r1
_r1:	.long	0
.globl _r2
_r2:	.long	0
.globl _r3
_r3:	.long	0
.globl _r4
_r4:	.long	0
.globl _res
_res:	.long	0
.globl _s
_s:	.long	0
.globl _t
_t:	.long	0
.globl _w
_w:	.long	0
.globl _x
_x:	.long	0
.globl _y
_y:	.long	0
.globl _z
_z:	.long	0
