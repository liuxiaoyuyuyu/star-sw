TDataSet *CreateTable() { 
// -----------------------------------------------------------------
// Top/cal/org_slp_bprs Allocated rows: 4800  Used rows: 4800  Row size: 4 bytes
//  Table: emc_adcslope_st[0]--> emc_adcslope_st[4799]
// ====================================================================
// ------  Test whether this table share library was loaded ------
  if (!gROOT->GetClass("St_emc_adcslope")) return 0;
  emc_adcslope_st row;
  St_emc_adcslope *tableSet = new St_emc_adcslope("org_slp_bprs",4800);
  //
  row.p0       =          1; // adc slope for ADC channel ;
  for (Int_t i=0;i<4800;i++) tableSet->AddAt(&row,i);
  // ----------------- end of code ---------------
 return (TDataSet *)tableSet;
}
