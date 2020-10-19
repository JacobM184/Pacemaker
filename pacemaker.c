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
char URI_active;
char APace;
char VRP_start;
char AVI_stop;
char AEI_stop;
char LRI_restart;
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
char PRE_g16;
char g17;
char g18;
char g19;
char g20;
char g21;
char PRE_g21;
char g22;
char g23;
char g24;
char PRE_g24;
char g25;
char g26;
char g27;
char g28;
char g29;
char g30;
char PRE_g30;
char g31;
char g32;
char g33;
char g34;
char g35;
char PRE_g35;
char g36;
char g36b;
char g37;
char g38;
char g39;
char g40;
char g41;
char PRE_g41;
char g42;
char g43;
char g44;
char g45;
char g46;
char g47;
char PRE_g47;
char g48;
char g48b;
char g49;
char g50;
char g51;
char g52;
char PRE_g52;
char g53;
char g53b;
char g54;
char g55;
char PRE_g55;
char g56;
char g56b;
char g57;
char g58;
char g59;
char g60;
char g61;
char g62;
char g63;
char PRE_g63;
char g64;
char g65;
char g66;
char g67;
char g68;
char PRE_g68;
char g69;
char g70;
char g71;
char PRE_g71;
char g72;
char g73;
char g74;
char g75;
char PRE_g75;
char g76;
char g77;
char g78;
char g79;
char g80;
char g81;
char g82;
char PRE_g82;
char g83;
char g84;
char g85;
char g86;
char g87;
char PRE_g87;
char g88;
char g89;
char g90;
char PRE_g90;
char g91;
char g92;
char g93;
char g94;
char g95;
char g96;
char g97;
char PRE_g97;
char g98;
char g99;
char g100;
char _GO;
char _cg11;
char _cg14;
char _cg5;
char _cg7;
char _cg10;
char _cg12;
char _cg33;
char _cg17;
char _cg22;
char _cg25;
char _cg31;
char _cg19;
char _cg29;
char _cg23;
char _cg28;
char _cg32;
char _cg26;
char _cg43;
char _cg61;
char _cg36;
char _cg48;
char _cg53;
char _cg56;
char _cg37;
char _cg42;
char _cg39;
char _cg44;
char _cg45;
char _cg60;
char _cg49;
char _cg51;
char _cg54;
char _cg58;
char _cg77;
char _cg80;
char _cg64;
char _cg69;
char _cg72;
char _cg76;
char _cg66;
char _cg70;
char _cg78;
char _cg73;
char _cg92;
char _cg93;
char _cg83;
char _cg88;
char _cg91;
char _cg85;
char _cg89;
char g6_e1;
char g18_e2;
char g38_e3;
char g65_e4;
char g84_e5;
char g95_e1_fix;
char g95_e1;
char g99_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g4 = 0;
   PRE_g9 = 0;
   PRE_g16 = 0;
   PRE_g21 = 0;
   PRE_g24 = 0;
   PRE_g30 = 0;
   PRE_g35 = 0;
   PRE_g41 = 0;
   PRE_g47 = 0;
   PRE_g52 = 0;
   PRE_g55 = 0;
   PRE_g63 = 0;
   PRE_g68 = 0;
   PRE_g71 = 0;
   PRE_g75 = 0;
   PRE_g82 = 0;
   PRE_g87 = 0;
   PRE_g90 = 0;
   PRE_g97 = 0;
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
      g6_e1 =(!((g5||g10)));
      _cg5 = R;
      _cg10 = R;
      g12 =(g10&&(!(_cg10)));
      _cg12 = URI_ex;
      g11 =((g10&&_cg10)||(g12&&_cg12));
      _cg11 = R;
      g6 =((g5&&_cg5)||(g11&&_cg11));
      g17 =(PRE_g16);
      g22 =(PRE_g21);
      g25 =(PRE_g24);
      g31 =(PRE_g30);
      g18_e2 =(!((g17||g22||g25||g31)));
      _cg25 = R;
      _cg17 = R;
      _cg31 = R;
      _cg22 = R;
      g18 =((g25&&_cg25)||(g17&&_cg17)||(g31&&_cg31)||(g22&&_cg22));
      g36 =(PRE_g35);
      g48 =(PRE_g47);
      g42 =(PRE_g41);
      g53 =(PRE_g52);
      g56 =(PRE_g55);
      g38_e3 =(!((g36||g48||g42||g53||g56)));
      _cg42 = R;
      g96 = g0;
      g98 =(PRE_g97);
      g97 =(g96||g98);
      if(g97){
         URI_active = 0;
         VPace = 0;
         APace = 0;
         PVARP_start = 0;
         URI_start = 0;
         VRP_start = 0;
         AVI_start = 0;
         AVI_stop = 0;
         AEI_start = 0;
         AEI_stop = 0;
         LRI_start = 0;
         LRI_restart = 0;
      }
      g13 =(g12&&(!(_cg12)));
      if(g13){
         URI_active =(URI_active||1);
      }
      g56b = g56;
      _cg56 =((R||(VSense&&(!(URI_active))))||(VPace&&(!(URI_active))));
      g57 =(g56b&&(!(_cg56)));
      if(g57){
         VPace =(VPace||1);
      }
      g48b = g48;
      _cg48 =((R||(VSense&&(!(URI_active))))||(VPace&&(!(URI_active))));
      g49 =(g48b&&(!(_cg48)));
      _cg49 =(VSense&&(!(URI_active)));
      g50 =(g49&&_cg49);
      if(g50){
         AVI_stop =(AVI_stop||1);
      }
      g53b = g53;
      _cg53 =((R||(VSense&&(!(URI_active))))||(VPace&&(!(URI_active))));
      g36b = g36;
      _cg36 =((R||(VSense&&(!(URI_active))))||(VPace&&(!(URI_active))));
      g37 =(g57||(g48b&&_cg48)||(g56b&&_cg56)||g50||(g53b&&_cg53)||(g36b&&_cg36));
      _cg37 = R;
      g38 =((g42&&_cg42)||(g37&&_cg37));
      g64 =(PRE_g63);
      g69 =(PRE_g68);
      g72 =(PRE_g71);
      g76 =(PRE_g75);
      g65_e4 =(!((g64||g69||g72||g76)));
      _cg64 = R;
      _cg69 = R;
      _cg72 = R;
      _cg76 = R;
      g65 =((g64&&_cg64)||(g69&&_cg69)||(g72&&_cg72)||(g76&&_cg76));
      g83 =(PRE_g82);
      g88 =(PRE_g87);
      g91 =(PRE_g90);
      g84_e5 =(!((g83||g88||g91)));
      _cg83 = R;
      _cg88 = R;
      _cg91 = R;
      g84 =((g83&&_cg83)||(g88&&_cg88)||(g91&&_cg91));
      g94 =((g6_e1||g6)&&(g18_e2||g18)&&(g38_e3||g38)&&(g65_e4||g65)&&(g84_e5||g84)&&(g6||g18||g38||g65||g84));
      g2 =(g1||g94);
      g3 = g2;
      g7 =(g5&&(!(_cg5)));
      _cg7 = VSense;
      g14 =(g7&&(!(_cg7)));
      _cg14 = VPace;
      g4 =((g11&&(!(_cg11)))||(g14&&(!(_cg14)))||g3);
      g8 =((g7&&_cg7)||(g14&&_cg14));
      if(g8){
         URI_start =(URI_start||1);
      }
      g9 =(g13||g8);
      g15 = g2;
      g19 =(g17&&(!(_cg17)));
      _cg19 = VSense;
      g33 =(g19&&(!(_cg19)));
      _cg33 = VPace;
      g16 =(g15||(g33&&(!(_cg33))));
      g20 =((g19&&_cg19)||(g33&&_cg33));
      if(g20){
         LRI_start =(LRI_start||1);
      }
      g23 =(g22&&(!(_cg22)));
      _cg23 =(VRP_ex&&(!(URI_active)));
      g29 =(g23&&(!(_cg23)));
      _cg29 =(VRP_ex&&URI_active);
      g26 =(g25&&(!(_cg25)));
      _cg26 = VSense;
      g28 =(g26&&(!(_cg26)));
      _cg28 = VPace;
      g27 =((g28&&_cg28)||(g26&&_cg26));
      if(g27){
         LRI_restart =(LRI_restart||1);
      }
      g21 =(g20||(g29&&(!(_cg29)))||g27);
      g32 =(g31&&(!(_cg31)));
      _cg32 =(!(URI_active));
      g24 =((g23&&_cg23)||(g32&&_cg32)||(g28&&(!(_cg28))));
      g30 =((g29&&_cg29)||(g32&&(!(_cg32))));
      g34 = g2;
      g43 =(g42&&(!(_cg42)));
      _cg43 = PVARP_ex;
      g73 =(g72&&(!(_cg72)));
      _cg73 = AEI_ex;
      g74 =(g73&&_cg73);
      if(g74){
         APace =(APace||1);
      }
      g45 =(g36b&&(!(_cg36)));
      _cg45 = ASense;
      g61 =(g45&&(!(_cg45)));
      _cg61 = APace;
      g35 =(g34||(g43&&_cg43)||(g61&&(!(_cg61))));
      g39 =(g37&&(!(_cg37)));
      _cg39 =(VSense&&(!(URI_active)));
      g44 =(g39&&(!(_cg39)));
      _cg44 =(VPace&&(!(URI_active)));
      g40 =((g44&&_cg44)||(g39&&_cg39)||(g44&&_cg44));
      if(g40){
         PVARP_start =(PVARP_start||1);
      }
      g41 =(g40||(g43&&(!(_cg43))));
      g46 =((g45&&_cg45)||(g61&&_cg61));
      if(g46){
         AVI_start =(AVI_start||1);
      }
      g51 =(g49&&(!(_cg49)));
      _cg51 =(URI_active&&AVI_ex);
      g58 =(g51&&(!(_cg51)));
      _cg58 = LRI_ex;
      g60 =(g58&&(!(_cg58)));
      _cg60 =((!(URI_active))&&AVI_ex);
      g47 =((g60&&(!(_cg60)))||g46);
      g54 =(g53b&&(!(_cg53)));
      _cg54 = URI_ex;
      g52 =((g51&&_cg51)||(g54&&(!(_cg54))));
      g59 =(g58&&_cg58);
      if(g59){
         AVI_stop =(AVI_stop||1);
      }
      g55 =(g59||(g54&&_cg54)||(g60&&_cg60));
      g62 = g2;
      g77 =(g76&&(!(_cg76)));
      _cg77 =(!(URI_active));
      g66 =(g64&&(!(_cg64)));
      _cg66 = VSense;
      g80 =(g66&&(!(_cg66)));
      _cg80 = VPace;
      g63 =(g62||(g77&&_cg77)||(g80&&(!(_cg80))));
      g67 =((g66&&_cg66)||(g80&&_cg80));
      if(g67){
         AEI_start =(AEI_start||1);
      }
      g70 =(g69&&(!(_cg69)));
      _cg70 = PVARP_ex;
      g68 =(g67||(g70&&(!(_cg70))));
      g78 =(g73&&(!(_cg73)));
      _cg78 = ASense;
      g71 =((g70&&_cg70)||(g78&&(!(_cg78))));
      g79 =(g78&&_cg78);
      if(g79){
         AEI_stop =(AEI_stop||1);
      }
      g75 =((g77&&(!(_cg77)))||g79||g74);
      g81 = g2;
      g92 =(g91&&(!(_cg91)));
      _cg92 =(!(URI_active));
      g85 =(g83&&(!(_cg83)));
      _cg85 = VSense;
      g93 =(g85&&(!(_cg85)));
      _cg93 = VPace;
      g82 =((g92&&_cg92)||(g93&&(!(_cg93)))||g81);
      g86 =((g85&&_cg85)||(g93&&_cg93));
      if(g86){
         VRP_start =(VRP_start||1);
      }
      g89 =(g88&&(!(_cg88)));
      _cg89 = VRP_ex;
      g87 =((g89&&(!(_cg89)))||g86);
      g90 =((g89&&_cg89)||(g92&&(!(_cg92))));
      g95_e1_fix =(g69||g88||g42||g25||g72||g91||g31||g53||g56);
      g95_e1 =(!((g5||g17||g36||g64||g83||g10||g22||g48||g76||g95_e1_fix)));
      g99_e2 =(!(g98));
   }
   PRE_g4 = g4;
   PRE_g9 = g9;
   PRE_g16 = g16;
   PRE_g21 = g21;
   PRE_g24 = g24;
   PRE_g30 = g30;
   PRE_g35 = g35;
   PRE_g41 = g41;
   PRE_g47 = g47;
   PRE_g52 = g52;
   PRE_g55 = g55;
   PRE_g63 = g63;
   PRE_g68 = g68;
   PRE_g71 = g71;
   PRE_g75 = g75;
   PRE_g82 = g82;
   PRE_g87 = g87;
   PRE_g90 = g90;
   PRE_g97 = g97;
   _PRE_GO = _GO;
   return;
}
