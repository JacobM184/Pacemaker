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
char VRP_stop;
char AVI_stop;
char AEI_stop;
char LRI_stop;
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
char g27b;
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
char PRE_g50;
char g51;
char g51b;
char g52;
char g53;
char PRE_g53;
char g54;
char g54b;
char g55;
char g56;
char g57;
char g58;
char g59;
char g60;
char g61;
char PRE_g61;
char g62;
char g63;
char g64;
char g65;
char g66;
char PRE_g66;
char g67;
char g68;
char g69;
char PRE_g69;
char g70;
char g71;
char g72;
char g73;
char PRE_g73;
char g74;
char g75;
char g76;
char g77;
char g78;
char g79;
char g80;
char PRE_g80;
char g81;
char g82;
char g83;
char g84;
char g85;
char PRE_g85;
char g86;
char g87;
char g88;
char PRE_g88;
char g89;
char g90;
char g91;
char g92;
char g93;
char g94;
char g95;
char PRE_g95;
char g96;
char g97;
char g98;
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
char _cg59;
char _cg36;
char _cg48;
char _cg51;
char _cg54;
char _cg37;
char _cg42;
char _cg39;
char _cg44;
char _cg45;
char _cg58;
char _cg49;
char _cg52;
char _cg56;
char _cg75;
char _cg78;
char _cg62;
char _cg67;
char _cg70;
char _cg74;
char _cg64;
char _cg68;
char _cg76;
char _cg71;
char _cg90;
char _cg91;
char _cg81;
char _cg86;
char _cg89;
char _cg83;
char _cg87;
char g6_e1;
char g18_e2;
char g38_e3;
char g63_e4;
char g82_e5;
char g93_e1_fix;
char g93_e1;
char g97_e2;
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
   PRE_g50 = 0;
   PRE_g53 = 0;
   PRE_g61 = 0;
   PRE_g66 = 0;
   PRE_g69 = 0;
   PRE_g73 = 0;
   PRE_g80 = 0;
   PRE_g85 = 0;
   PRE_g88 = 0;
   PRE_g95 = 0;
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
      _cg10 = R;
      g12 =(g10&&(!(_cg10)));
      _cg12 = URI_ex;
      g11 =((g10&&_cg10)||(g12&&_cg12));
      _cg11 = R;
      _cg5 = R;
      g6 =((g11&&_cg11)||(g5&&_cg5));
      g17 =(PRE_g16);
      g22 =(PRE_g21);
      g25 =(PRE_g24);
      g31 =(PRE_g30);
      g18_e2 =(!((g17||g22||g25||g31)));
      _cg22 = R;
      _cg17 = R;
      _cg31 = R;
      _cg25 = R;
      g18 =((g22&&_cg22)||(g17&&_cg17)||(g31&&_cg31)||(g25&&_cg25));
      g36 =(PRE_g35);
      g48 =(PRE_g47);
      g42 =(PRE_g41);
      g51 =(PRE_g50);
      g54 =(PRE_g53);
      g38_e3 =(!((g36||g48||g42||g51||g54)));
      g94 = g0;
      g96 =(PRE_g95);
      g95 =(g94||g96);
      if(g95){
         URI_active = 0;
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
      }
      g13 =(g12&&(!(_cg12)));
      if(g13){
         URI_active =(URI_active||1);
      }
      g36b = g36;
      _cg36 =((R||(VSense&&(!(URI_active))))||(VPace&&(!(URI_active))));
      g54b = g54;
      _cg54 =((R||(VSense&&(!(URI_active))))||(VPace&&(!(URI_active))));
      g48b = g48;
      _cg48 =((R||(VSense&&(!(URI_active))))||(VPace&&(!(URI_active))));
      g51b = g51;
      _cg51 =((R||(VSense&&(!(URI_active))))||(VPace&&(!(URI_active))));
      g55 =(g54b&&(!(_cg54)));
      if(g55){
         VPace =(VPace||1);
      }
      g37 =((g36b&&_cg36)||(g54b&&_cg54)||(g48b&&_cg48)||(g51b&&_cg51)||g55);
      _cg37 = R;
      _cg42 = R;
      g38 =((g37&&_cg37)||(g42&&_cg42));
      g62 =(PRE_g61);
      g67 =(PRE_g66);
      g70 =(PRE_g69);
      g74 =(PRE_g73);
      g63_e4 =(!((g62||g67||g70||g74)));
      _cg74 = R;
      _cg62 = R;
      _cg70 = R;
      _cg67 = R;
      g63 =((g74&&_cg74)||(g62&&_cg62)||(g70&&_cg70)||(g67&&_cg67));
      g81 =(PRE_g80);
      g86 =(PRE_g85);
      g89 =(PRE_g88);
      g82_e5 =(!((g81||g86||g89)));
      _cg81 = R;
      _cg86 = R;
      _cg89 = R;
      g82 =((g81&&_cg81)||(g86&&_cg86)||(g89&&_cg89));
      g92 =((g6_e1||g6)&&(g18_e2||g18)&&(g38_e3||g38)&&(g63_e4||g63)&&(g82_e5||g82)&&(g6||g18||g38||g63||g82));
      g2 =(g1||g92);
      g3 = g2;
      g7 =(g5&&(!(_cg5)));
      _cg7 = VSense;
      g14 =(g7&&(!(_cg7)));
      _cg14 = VPace;
      g4 =((g11&&(!(_cg11)))||g3||(g14&&(!(_cg14))));
      g8 =((g14&&_cg14)||(g7&&_cg7));
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
         LRI_stop =(LRI_stop||1);
      }
      g27b = g27;
      if(g27b){
         LRI_start =(LRI_start||1);
      }
      g21 =(g20||(g29&&(!(_cg29)))||g27b);
      g32 =(g31&&(!(_cg31)));
      _cg32 = URI_ex;
      g24 =((g23&&_cg23)||(g32&&_cg32)||(g28&&(!(_cg28))));
      g30 =((g32&&(!(_cg32)))||(g29&&_cg29));
      g34 = g2;
      g43 =(g42&&(!(_cg42)));
      _cg43 = PVARP_ex;
      g71 =(g70&&(!(_cg70)));
      _cg71 = AEI_ex;
      g72 =(g71&&_cg71);
      if(g72){
         APace =(APace||1);
      }
      g45 =(g36b&&(!(_cg36)));
      _cg45 = ASense;
      g59 =(g45&&(!(_cg45)));
      _cg59 = APace;
      g35 =((g43&&_cg43)||g34||(g59&&(!(_cg59))));
      g39 =(g37&&(!(_cg37)));
      _cg39 =(VSense&&(!(URI_active)));
      g44 =(g39&&(!(_cg39)));
      _cg44 =(VPace&&(!(URI_active)));
      g40 =((g44&&_cg44)||(g39&&_cg39)||(g44&&_cg44));
      if(g40){
         PVARP_start =(PVARP_start||1);
      }
      g41 =(g40||(g43&&(!(_cg43))));
      g46 =((g59&&_cg59)||(g45&&_cg45));
      if(g46){
         AVI_start =(AVI_start||1);
      }
      g49 =(g48b&&(!(_cg48)));
      _cg49 =(URI_active&&AVI_ex);
      g56 =(g49&&(!(_cg49)));
      _cg56 = LRI_ex;
      g58 =(g56&&(!(_cg56)));
      _cg58 =((!(URI_active))&&AVI_ex);
      g47 =(g46||(g58&&(!(_cg58))));
      g52 =(g51b&&(!(_cg51)));
      _cg52 = URI_ex;
      g50 =((g49&&_cg49)||(g52&&(!(_cg52))));
      g57 =(g56&&_cg56);
      if(g57){
         AVI_stop =(AVI_stop||1);
      }
      g53 =((g52&&_cg52)||g57||(g58&&_cg58));
      g60 = g2;
      g64 =(g62&&(!(_cg62)));
      _cg64 = VSense;
      g78 =(g64&&(!(_cg64)));
      _cg78 = VPace;
      g75 =(g74&&(!(_cg74)));
      _cg75 = URI_ex;
      g61 =(g60||(g78&&(!(_cg78)))||(g75&&_cg75));
      g65 =((g78&&_cg78)||(g64&&_cg64));
      if(g65){
         AEI_start =(AEI_start||1);
      }
      g68 =(g67&&(!(_cg67)));
      _cg68 = PVARP_ex;
      g66 =(g65||(g68&&(!(_cg68))));
      g76 =(g71&&(!(_cg71)));
      _cg76 = ASense;
      g69 =((g68&&_cg68)||(g76&&(!(_cg76))));
      g77 =(g76&&_cg76);
      if(g77){
         AEI_stop =(AEI_stop||1);
      }
      g73 =((g75&&(!(_cg75)))||g77||g72);
      g79 = g2;
      g90 =(g89&&(!(_cg89)));
      _cg90 = URI_ex;
      g83 =(g81&&(!(_cg81)));
      _cg83 = VSense;
      g91 =(g83&&(!(_cg83)));
      _cg91 = VPace;
      g80 =(g79||(g90&&_cg90)||(g91&&(!(_cg91))));
      g84 =((g83&&_cg83)||(g91&&_cg91));
      if(g84){
         VRP_start =(VRP_start||1);
      }
      g87 =(g86&&(!(_cg86)));
      _cg87 = VRP_ex;
      g85 =(g84||(g87&&(!(_cg87))));
      g88 =((g90&&(!(_cg90)))||(g87&&_cg87));
      g93_e1_fix =(g67||g86||g42||g25||g51||g70||g89||g31||g54);
      g93_e1 =(!((g5||g17||g36||g62||g81||g10||g22||g48||g74||g93_e1_fix)));
      g97_e2 =(!(g96));
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
   PRE_g50 = g50;
   PRE_g53 = g53;
   PRE_g61 = g61;
   PRE_g66 = g66;
   PRE_g69 = g69;
   PRE_g73 = g73;
   PRE_g80 = g80;
   PRE_g85 = g85;
   PRE_g88 = g88;
   PRE_g95 = g95;
   _PRE_GO = _GO;
   return;
}
