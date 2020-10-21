/*****************************************************************************/
/*                 G E N E R A T E D       C    C O D E                      */
/*****************************************************************************/
/* KIELER - Kiel Integrated Environment for Layout Eclipse RichClient        */
/*                                                                           */
/* http://www.informatik.uni-kiel.de/rtsys/kieler/                           */
/* Copyright 2014 by                                                         */
/* + Kiel University                                                         */
/*   + Department of Computer Science                                        */
/*     + Real-Time and Embedded Systems Group                                */
/*                                                                           */
/* This code is provided under the terms of the Eclipse Public License (EPL).*/
/*****************************************************************************/
char AEI_ex;
char R;
char APace;
char VRP_start;
char VRP_stop;
char AVI_stop;
char AEI_stop;
char LRI_stop;
char URI_active;
char AVI_active;
char ASense;
char VSense;
char PVARP_ex;
char AVI_ex;
char URI_ex;
char LRI_ex;
char VRP_ex;
char VPace;
char PVARP_start;
char URI_start;
char PVARP_stop;
char URI_stop;
char AVI_start;
char AEI_start;
char LRI_start;
char g0;
char g1;
char g2;
char g3;
char g4;
char PRE_g4;
char g5;
char g6;
char g7;
char g8;
char g9;
char PRE_g9;
char g10;
char g11;
char g12;
char g13;
char g14;
char g15;
char g16;
char g17;
char PRE_g17;
char g18;
char g19;
char g20;
char g21;
char g22;
char g23;
char PRE_g23;
char g24;
char g25;
char g26;
char g27;
char g28;
char PRE_g28;
char g29;
char g30;
char g31;
char PRE_g31;
char g32;
char g33;
char g34;
char g34b;
char g35;
char g36;
char g37;
char g38;
char PRE_g38;
char g39;
char g40;
char g41;
char g42;
char g43;
char PRE_g43;
char g44;
char g45;
char g46;
char PRE_g46;
char g47;
char g48;
char g49;
char g50;
char g51;
char g52;
char PRE_g52;
char g53;
char g53b;
char g54;
char g55;
char g56;
char PRE_g56;
char g57;
char g57b;
char g58;
char g59;
char g60;
char g61;
char g62;
char g63;
char g64;
char PRE_g64;
char g65;
char g65b;
char g66;
char g67;
char g68;
char g69;
char PRE_g69;
char g70;
char g70b;
char g71;
char g72;
char g73;
char g74;
char g75;
char g76;
char g77;
char g78;
char g79;
char g80;
char g81;
char g82;
char g83;
char g84;
char g85;
char PRE_g85;
char g86;
char g87;
char g88;
char g89;
char g90;
char PRE_g90;
char g91;
char g92;
char g93;
char PRE_g93;
char g94;
char g95;
char g96;
char g97;
char g98;
char g99;
char g100;
char g101;
char PRE_g101;
char g102;
char g103;
char g104;
char g105;
char g106;
char PRE_g106;
char g107;
char g108;
char g109;
char g110;
char PRE_g110;
char g111;
char g112;
char g113;
char g114;
char g115;
char g116;
char g117;
char g118;
char PRE_g118;
char g119;
char g120;
char g121;
char _GO;
char _cg12;
char _cg21;
char _cg5;
char _cg11;
char _cg7;
char _cg14;
char _cg10;
char _cg19;
char _cg15;
char _cg36;
char _cg24;
char _cg29;
char _cg32;
char _cg26;
char _cg30;
char _cg35;
char _cg33;
char _cg83;
char _cg39;
char _cg44;
char _cg47;
char _cg74;
char _cg41;
char _cg77;
char _cg80;
char _cg45;
char _cg79;
char _cg48;
char _cg62;
char _cg53;
char _cg57;
char _cg55;
char _cg58;
char _cg60;
char _cg65;
char _cg72;
char _cg66;
char _cg68;
char _cg70;
char _cg71;
char _cg75;
char _cg81;
char _cg99;
char _cg86;
char _cg91;
char _cg94;
char _cg88;
char _cg92;
char _cg97;
char _cg95;
char _cg108;
char _cg112;
char _cg113;
char _cg114;
char _cg102;
char _cg107;
char _cg111;
char _cg104;
char _cg109;
char g54_e1;
char g67_e2;
char g6_e1;
char g25_e2;
char g40_e3;
char g87_e4;
char g103_e5;
char g116_e1_fix;
char g116_e1;
char g120_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g4 = 0;
   PRE_g9 = 0;
   PRE_g17 = 0;
   PRE_g23 = 0;
   PRE_g28 = 0;
   PRE_g31 = 0;
   PRE_g38 = 0;
   PRE_g43 = 0;
   PRE_g46 = 0;
   PRE_g52 = 0;
   PRE_g56 = 0;
   PRE_g64 = 0;
   PRE_g69 = 0;
   PRE_g85 = 0;
   PRE_g90 = 0;
   PRE_g93 = 0;
   PRE_g101 = 0;
   PRE_g106 = 0;
   PRE_g110 = 0;
   PRE_g118 = 0;
   return;
}
void tick(){
   if(_PRE_GO == 1){
      _GO = 0;
   }
   {
      g0 = _GO;
      g1 = g0;
      g5 =(PRE_g4);
      g10 =(PRE_g9);
      g18 =(PRE_g17);
      g6_e1 =(!((g5||g10||g18)));
      _cg5 = R;
      _cg10 =(R||VSense);
      g19 =(g10&&(!(_cg10)));
      _cg19 = URI_ex;
      g11 =((g19&&_cg19)||(g10&&_cg10));
      _cg11 = R;
      g6 =((g5&&_cg5)||(g11&&_cg11));
      g24 =(PRE_g23);
      g29 =(PRE_g28);
      g32 =(PRE_g31);
      g25_e2 =(!((g24||g29||g32)));
      _cg24 = R;
      _cg32 = R;
      _cg29 = R;
      g25 =((g24&&_cg24)||(g32&&_cg32)||(g29&&_cg29));
      g39 =(PRE_g38);
      g44 =(PRE_g43);
      g47 =(PRE_g46);
      g53 =(PRE_g52);
      g65 =(PRE_g64);
      g57 =(PRE_g56);
      g70 =(PRE_g69);
      g40_e3 =(!((g39||g44||g47||g53||g65||g57||g70)));
      _cg47 = R;
      _cg39 = R;
      g54_e1 =(!((g53||g57)));
      g117 = g0;
      g119 =(PRE_g118);
      g118 =(g117||g119);
      if(g118){
         VPace = 0;
         APace = 0;
         PVARP_start = 0;
         URI_start = 0;
         VRP_start = 0;
         PVARP_stop = 0;
         URI_stop = 0;
         VRP_stop = 0;
         AVI_start = 0;
         AVI_stop = 0;
         AEI_start = 0;
         AEI_stop = 0;
         LRI_start = 0;
         LRI_stop = 0;
         URI_active = 0;
         AVI_active = 0;
      }
      g20 =(g19&&(!(_cg19)));
      if(g20){
         URI_active =(URI_active||1);
      }
      g12 =(g11&&(!(_cg11)));
      _cg12 = VSense;
      g13 =(g12&&_cg12);
      if(g13){
         URI_active =(URI_active||1);
      }
      g53b = g53;
      _cg53 =((R||VSense)||(VPace&&(!(URI_active))));
      g57b = g57;
      _cg57 =((R||VSense)||(VPace&&(!(URI_active))));
      g55 =(g53b&&(!(_cg53)));
      _cg55 =(URI_active&&AVI_ex);
      g60 =(g55&&(!(_cg55)));
      _cg60 = LRI_ex;
      g62 =(g60&&(!(_cg60)));
      _cg62 =((!(URI_active))&&AVI_ex);
      g61 =(g60&&_cg60);
      if(g61){
         AVI_stop =(AVI_stop||1);
      }
      g58 =(g57b&&(!(_cg57)));
      _cg58 = URI_ex;
      g59 =((g62&&_cg62)||g61||(g58&&_cg58));
      if(g59){
         VPace =(VPace||1);
      }
      g54 =((g53b&&_cg53)||(g57b&&_cg57)||g59);
      g67_e2 =(!((g65||g70)));
      g70b = g70;
      _cg70 =((R||VSense)||(VPace&&(!(URI_active))));
      g71 =(g70b&&(!(_cg70)));
      _cg71 = VPace;
      g65b = g65;
      _cg65 =(((R||VSense)||(VPace&&(!(URI_active))))||VPace);
      g72 =(g65b&&(!(_cg65)));
      _cg72 = AVI_ex;
      g66 =((g65b&&_cg65)||(g72&&_cg72));
      _cg66 =((R||VSense)||(VPace&&(!(URI_active))));
      g68 =(g66&&(!(_cg66)));
      _cg68 = VPace;
      g67 =((g71&&_cg71)||(g66&&_cg66)||(g70b&&_cg70)||(g68&&_cg68));
      g74 =((g54_e1||g54)&&(g67_e2||g67)&&(g54||g67));
      _cg74 = R;
      _cg44 = R;
      g40 =((g47&&_cg47)||(g39&&_cg39)||(g74&&_cg74)||(g44&&_cg44));
      g86 =(PRE_g85);
      g91 =(PRE_g90);
      g94 =(PRE_g93);
      g87_e4 =(!((g86||g91||g94)));
      _cg86 = R;
      _cg94 = R;
      _cg91 = R;
      g87 =((g86&&_cg86)||(g94&&_cg94)||(g91&&_cg91));
      g102 =(PRE_g101);
      g107 =(PRE_g106);
      g111 =(PRE_g110);
      g103_e5 =(!((g102||g107||g111)));
      _cg107 = R;
      _cg111 = R;
      _cg102 = R;
      g103 =((g107&&_cg107)||(g111&&_cg111)||(g102&&_cg102));
      g115 =((g6_e1||g6)&&(g25_e2||g25)&&(g40_e3||g40)&&(g87_e4||g87)&&(g103_e5||g103)&&(g6||g25||g40||g87||g103));
      g2 =(g1||g115);
      g3 = g2;
      g7 =(g5&&(!(_cg5)));
      _cg7 = VSense;
      g21 =(g7&&(!(_cg7)));
      _cg21 = VPace;
      g4 =((g21&&(!(_cg21)))||(g12&&(!(_cg12)))||g3);
      g73 =(g72&&(!(_cg72)));
      if(g73){
         AVI_active =(AVI_active||1);
      }
      g75 =(g74&&(!(_cg74)));
      _cg75 = VSense;
      g76 =(g75&&_cg75);
      if(g76){
         AVI_active =(AVI_active||1);
      }
      g77 =(g75&&(!(_cg75)));
      _cg77 =(VPace&&(!(URI_active)));
      g78 =(g77&&_cg77);
      if(g78){
         AVI_active =(AVI_active||1);
      }
      g14 =(g13||g18);
      _cg14 =(!(AVI_active));
      g15 =(g14&&(!(_cg14)));
      _cg15 = AVI_active;
      g16 =(g15&&_cg15);
      if(g16){
         URI_stop =(URI_stop||1);
      }
      g8 =((g21&&_cg21)||(g7&&_cg7)||g16);
      if(g8){
         URI_start =(URI_start||1);
      }
      g9 =((g14&&_cg14)||g20||g8);
      g17 =(g15&&(!(_cg15)));
      g22 = g2;
      g26 =(g24&&(!(_cg24)));
      _cg26 = VSense;
      g36 =(g26&&(!(_cg26)));
      _cg36 = VPace;
      g23 =((g36&&(!(_cg36)))||g22);
      g27 =((g26&&_cg26)||(g36&&_cg36));
      if(g27){
         LRI_start =(LRI_start||1);
      }
      g33 =(g32&&(!(_cg32)));
      _cg33 =(VSense&&AVI_active);
      g35 =(g33&&(!(_cg33)));
      _cg35 =(VPace&&AVI_active);
      g34 =((g35&&_cg35)||(g33&&_cg33));
      if(g34){
         LRI_stop =(LRI_stop||1);
      }
      g34b = g34;
      if(g34b){
         LRI_start =(LRI_start||1);
      }
      g30 =(g29&&(!(_cg29)));
      _cg30 = VRP_ex;
      g28 =(g34b||(g30&&(!(_cg30)))||g27);
      g31 =((g30&&_cg30)||(g35&&(!(_cg35))));
      g37 = g2;
      g95 =(g94&&(!(_cg94)));
      _cg95 = AEI_ex;
      g96 =(g95&&_cg95);
      if(g96){
         APace =(APace||1);
      }
      g41 =(g39&&(!(_cg39)));
      _cg41 = VPace;
      g80 =(g41&&(!(_cg41)));
      _cg80 = VSense;
      g81 =(g80&&(!(_cg80)));
      _cg81 = APace;
      g83 =(g81&&(!(_cg81)));
      _cg83 = ASense;
      g38 =(g37||(g83&&(!(_cg83))));
      g42 =((g41&&_cg41)||(g77&&(!(_cg77)))||(g80&&_cg80)||g76||g78);
      if(g42){
         PVARP_start =(PVARP_start||1);
      }
      g45 =(g44&&(!(_cg44)));
      _cg45 = PVARP_ex;
      g43 =(g42||(g45&&(!(_cg45))));
      g48 =(g47&&(!(_cg47)));
      _cg48 = ASense;
      g79 =(g48&&(!(_cg48)));
      _cg79 = APace;
      g46 =((g45&&_cg45)||(g79&&(!(_cg79))));
      g49 =((g48&&_cg48)||(g79&&_cg79));
      if(g49){
         AVI_start =(AVI_start||1);
      }
      g82 =((g83&&_cg83)||(g81&&_cg81));
      if(g82){
         AVI_start =(AVI_start||1);
      }
      g50 =(g82||g49);
      g51 = g50;
      g52 =(g51||(g62&&(!(_cg62))));
      g56 =((g55&&_cg55)||(g58&&(!(_cg58))));
      g63 = g50;
      g64 =(g73||g63);
      g69 =((g68&&(!(_cg68)))||(g71&&(!(_cg71))));
      g84 = g2;
      g97 =(g95&&(!(_cg95)));
      _cg97 = ASense;
      g98 =(g97&&_cg97);
      if(g98){
         AEI_stop =(AEI_stop||1);
      }
      g88 =(g86&&(!(_cg86)));
      _cg88 = VSense;
      g99 =(g88&&(!(_cg88)));
      _cg99 = VPace;
      g85 =(g96||g98||(g99&&(!(_cg99)))||g84);
      g89 =((g88&&_cg88)||(g99&&_cg99));
      if(g89){
         AEI_start =(AEI_start||1);
      }
      g92 =(g91&&(!(_cg91)));
      _cg92 = PVARP_ex;
      g90 =(g89||(g92&&(!(_cg92))));
      g93 =((g92&&_cg92)||(g97&&(!(_cg97))));
      g100 = g2;
      g112 =(g111&&(!(_cg111)));
      _cg112 = ASense;
      g108 =(g107&&(!(_cg107)));
      _cg108 =(VRP_ex&&AVI_active);
      g113 =(g112&&(!(_cg112)));
      _cg113 = APace;
      g104 =(g102&&(!(_cg102)));
      _cg104 = VSense;
      g114 =(g104&&(!(_cg104)));
      _cg114 = VPace;
      g101 =((g112&&_cg112)||(g108&&_cg108)||(g113&&_cg113)||g100||(g114&&(!(_cg114))));
      g105 =((g104&&_cg104)||(g114&&_cg114));
      if(g105){
         VRP_start =(VRP_start||1);
      }
      g109 =(g108&&(!(_cg108)));
      _cg109 = VRP_ex;
      g106 =(g105||(g109&&(!(_cg109))));
      g110 =((g109&&_cg109)||(g113&&(!(_cg113))));
      g116_e1_fix =(g91||g107||g32||g47||g94||g53||g65||g111||g18||g57);
      g116_e1 =(!((g5||g24||g39||g86||g102||g10||g29||g44||g70||g116_e1_fix)));
      g120_e2 =(!(g119));
   }
   PRE_g4 = g4;
   PRE_g9 = g9;
   PRE_g17 = g17;
   PRE_g23 = g23;
   PRE_g28 = g28;
   PRE_g31 = g31;
   PRE_g38 = g38;
   PRE_g43 = g43;
   PRE_g46 = g46;
   PRE_g52 = g52;
   PRE_g56 = g56;
   PRE_g64 = g64;
   PRE_g69 = g69;
   PRE_g85 = g85;
   PRE_g90 = g90;
   PRE_g93 = g93;
   PRE_g101 = g101;
   PRE_g106 = g106;
   PRE_g110 = g110;
   PRE_g118 = g118;
   _PRE_GO = _GO;
   return;
}
