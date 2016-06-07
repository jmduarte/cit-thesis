void npf_vs_mr_razor_fit()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 22 00:27:42 2016) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(-223.0546,-0.1461039,3180.582,0.8279221);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(10);
   c->SetLeftMargin(0.18);
   c->SetRightMargin(0.05);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.15);
   c->SetFrameFillStyle(0);
   c->SetFrameLineStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderSize(10);
   c->SetFrameFillStyle(0);
   c->SetFrameLineStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderSize(10);
   
   Double_t _fx3001[7] = {
   450,
   550,
   650,
   750,
   850,
   950,
   2000};
   Double_t _fy3001[7] = {
   0.196286,
   0.1782175,
   0.1480886,
   0.163646,
   0.07563592,
   0.05448519,
   0.1070635};
   Double_t _felx3001[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   1000};
   Double_t _fely3001[7] = {
   0.02071301,
   0.02075339,
   0.02154176,
   0.03151989,
   0.0190151,
   0.0166484,
   0.01727853};
   Double_t _fehx3001[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   1000};
   Double_t _fehy3001[7] = {
   0.02071301,
   0.02075339,
   0.02154176,
   0.03151989,
   0.0190151,
   0.0166484,
   0.01727853};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,140,3260);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(0.75);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetFillColor(2);
   Graph_Graph3001->SetFillStyle(0);
   Graph_Graph3001->SetLineStyle(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->SetMarkerSize(1.2);
   Graph_Graph3001->GetXaxis()->SetTitle("M_{R} [GeV]");
   Graph_Graph3001->GetXaxis()->SetRange(9,92);
   Graph_Graph3001->GetXaxis()->SetNdivisions(508);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetTitle("Translation Factor #zeta");
   Graph_Graph3001->GetYaxis()->SetNdivisions(508);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("ap e1");
   
   Double_t _fx3002[7] = {
   450,
   550,
   650,
   750,
   850,
   950,
   2000};
   Double_t _fy3002[7] = {
   0.3373362,
   0.2162129,
   0.1890388,
   0.1581154,
   0.1383152,
   0.06127304,
   0.03564977};
   Double_t _felx3002[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   1000};
   Double_t _fely3002[7] = {
   0.02568053,
   0.02144434,
   0.02574803,
   0.02898546,
   0.03431363,
   0.02290454,
   0.008655721};
   Double_t _fehx3002[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   1000};
   Double_t _fehy3002[7] = {
   0.02568053,
   0.02144434,
   0.02574803,
   0.02898546,
   0.03431363,
   0.02290454,
   0.008655721};
   grae = new TGraphAsymmErrors(7,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,140,3260);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(0.396619);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetFillColor(2);
   Graph_Graph3002->SetFillStyle(0);
   Graph_Graph3002->SetLineStyle(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->SetMarkerSize(1.2);
   Graph_Graph3002->GetXaxis()->SetNdivisions(505);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(1.6);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("p e1 ");
   Double_t xAxis1[10] = {399.9, 400, 500, 600, 700, 800, 900, 1000, 3000, 3000.1}; 
   
   TH1F *fxn_plus_err1 = new TH1F("fxn_plus_err1","fxn_plus_err",9, xAxis1);
   fxn_plus_err1->SetBinContent(1,0.3869861);
   fxn_plus_err1->SetBinContent(2,0.2466728);
   fxn_plus_err1->SetBinContent(3,0.1611374);
   fxn_plus_err1->SetBinContent(4,0.121065);
   fxn_plus_err1->SetBinContent(5,0.09990284);
   fxn_plus_err1->SetBinContent(6,0.08771361);
   fxn_plus_err1->SetBinContent(7,0.08021455);
   fxn_plus_err1->SetBinContent(8,0.06381205);
   fxn_plus_err1->SetBinContent(9,0.06250247);
   fxn_plus_err1->SetBinError(1,0.3366779);
   fxn_plus_err1->SetBinError(2,0.2146053);
   fxn_plus_err1->SetBinError(3,0.1401895);
   fxn_plus_err1->SetBinError(4,0.1053266);
   fxn_plus_err1->SetBinError(5,0.08691547);
   fxn_plus_err1->SetBinError(6,0.07631084);
   fxn_plus_err1->SetBinError(7,0.06978666);
   fxn_plus_err1->SetBinError(8,0.05551648);
   fxn_plus_err1->SetBinError(9,0.05437715);
   fxn_plus_err1->SetEntries(9);
   fxn_plus_err1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0099ff");
   fxn_plus_err1->SetFillColor(ci);
   fxn_plus_err1->SetFillStyle(3254);

   ci = TColor::GetColor("#0000cc");
   fxn_plus_err1->SetLineColor(ci);
   fxn_plus_err1->SetLineStyle(0);
   fxn_plus_err1->SetLineWidth(2);
   fxn_plus_err1->SetMarkerStyle(0);
   fxn_plus_err1->SetMarkerSize(1.2);
   fxn_plus_err1->GetXaxis()->SetNdivisions(505);
   fxn_plus_err1->GetXaxis()->SetLabelFont(42);
   fxn_plus_err1->GetXaxis()->SetLabelSize(0.05);
   fxn_plus_err1->GetXaxis()->SetTitleSize(0.055);
   fxn_plus_err1->GetXaxis()->SetTitleOffset(1.2);
   fxn_plus_err1->GetXaxis()->SetTitleFont(42);
   fxn_plus_err1->GetYaxis()->SetLabelFont(42);
   fxn_plus_err1->GetYaxis()->SetLabelOffset(0.01);
   fxn_plus_err1->GetYaxis()->SetLabelSize(0.05);
   fxn_plus_err1->GetYaxis()->SetTitleSize(0.055);
   fxn_plus_err1->GetYaxis()->SetTitleOffset(1.6);
   fxn_plus_err1->GetYaxis()->SetTitleFont(42);
   fxn_plus_err1->GetZaxis()->SetLabelFont(42);
   fxn_plus_err1->GetZaxis()->SetLabelSize(0.035);
   fxn_plus_err1->GetZaxis()->SetTitleSize(0.035);
   fxn_plus_err1->GetZaxis()->SetTitleFont(42);
   fxn_plus_err1->Draw("same f e3");
   
   Double_t _fx3003[7] = {
   450,
   550,
   650,
   750,
   850,
   950,
   2000};
   Double_t _fy3003[7] = {
   0.196286,
   0.1782175,
   0.1480886,
   0.163646,
   0.07563592,
   0.05448519,
   0.1070635};
   Double_t _felx3003[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   1000};
   Double_t _fely3003[7] = {
   0.02071301,
   0.02075339,
   0.02154176,
   0.03151989,
   0.0190151,
   0.0166484,
   0.01727853};
   Double_t _fehx3003[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   1000};
   Double_t _fehy3003[7] = {
   0.02071301,
   0.02075339,
   0.02154176,
   0.03151989,
   0.0190151,
   0.0166484,
   0.01727853};
   grae = new TGraphAsymmErrors(7,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph30013003 = new TH1F("Graph_Graph_Graph30013003","",100,140,3260);
   Graph_Graph_Graph30013003->SetMinimum(0);
   Graph_Graph_Graph30013003->SetMaximum(0.75);
   Graph_Graph_Graph30013003->SetDirectory(0);
   Graph_Graph_Graph30013003->SetStats(0);
   Graph_Graph_Graph30013003->SetFillColor(2);
   Graph_Graph_Graph30013003->SetFillStyle(0);
   Graph_Graph_Graph30013003->SetLineStyle(0);
   Graph_Graph_Graph30013003->SetLineWidth(2);
   Graph_Graph_Graph30013003->SetMarkerStyle(20);
   Graph_Graph_Graph30013003->SetMarkerSize(1.2);
   Graph_Graph_Graph30013003->GetXaxis()->SetTitle("M_{R} [GeV]");
   Graph_Graph_Graph30013003->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph30013003->GetXaxis()->SetNdivisions(508);
   Graph_Graph_Graph30013003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30013003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph30013003->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph30013003->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph30013003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30013003->GetYaxis()->SetTitle("Translation Factor #zeta");
   Graph_Graph_Graph30013003->GetYaxis()->SetNdivisions(508);
   Graph_Graph_Graph30013003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30013003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph30013003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph30013003->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph30013003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph30013003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30013003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30013003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph30013003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph30013003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30013003);
   
   grae->Draw(" p e1");
   
   Double_t _fx3004[7] = {
   450,
   550,
   650,
   750,
   850,
   950,
   2000};
   Double_t _fy3004[7] = {
   0.3373362,
   0.2162129,
   0.1890388,
   0.1581154,
   0.1383152,
   0.06127304,
   0.03564977};
   Double_t _felx3004[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   1000};
   Double_t _fely3004[7] = {
   0.02568053,
   0.02144434,
   0.02574803,
   0.02898546,
   0.03431363,
   0.02290454,
   0.008655721};
   Double_t _fehx3004[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   1000};
   Double_t _fehy3004[7] = {
   0.02568053,
   0.02144434,
   0.02574803,
   0.02898546,
   0.03431363,
   0.02290454,
   0.008655721};
   grae = new TGraphAsymmErrors(7,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph30023004 = new TH1F("Graph_Graph_Graph30023004","",100,140,3260);
   Graph_Graph_Graph30023004->SetMinimum(0);
   Graph_Graph_Graph30023004->SetMaximum(0.396619);
   Graph_Graph_Graph30023004->SetDirectory(0);
   Graph_Graph_Graph30023004->SetStats(0);
   Graph_Graph_Graph30023004->SetFillColor(2);
   Graph_Graph_Graph30023004->SetFillStyle(0);
   Graph_Graph_Graph30023004->SetLineStyle(0);
   Graph_Graph_Graph30023004->SetLineWidth(2);
   Graph_Graph_Graph30023004->SetMarkerStyle(20);
   Graph_Graph_Graph30023004->SetMarkerSize(1.2);
   Graph_Graph_Graph30023004->GetXaxis()->SetNdivisions(505);
   Graph_Graph_Graph30023004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30023004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph30023004->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph30023004->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph30023004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30023004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30023004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph30023004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph30023004->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph30023004->GetYaxis()->SetTitleOffset(1.6);
   Graph_Graph_Graph30023004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30023004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30023004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph30023004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph30023004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30023004);
   
   grae->Draw(" p e1");
   
   TF1 *qcd_fxn1 = new TF1("qcd_fxn","[0]*x^[1]+[2]",400,3000);
   qcd_fxn1->SetFillColor(19);
   qcd_fxn1->SetFillStyle(0);
   qcd_fxn1->SetMarkerStyle(20);
   qcd_fxn1->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0000cc");
   qcd_fxn1->SetLineColor(ci);
   qcd_fxn1->SetLineWidth(2);
   qcd_fxn1->SetLineStyle(0);
   qcd_fxn1->GetXaxis()->SetNdivisions(505);
   qcd_fxn1->GetXaxis()->SetLabelFont(42);
   qcd_fxn1->GetXaxis()->SetLabelSize(0.05);
   qcd_fxn1->GetXaxis()->SetTitleSize(0.055);
   qcd_fxn1->GetXaxis()->SetTitleOffset(1.2);
   qcd_fxn1->GetXaxis()->SetTitleFont(42);
   qcd_fxn1->GetYaxis()->SetLabelFont(42);
   qcd_fxn1->GetYaxis()->SetLabelOffset(0.01);
   qcd_fxn1->GetYaxis()->SetLabelSize(0.05);
   qcd_fxn1->GetYaxis()->SetTitleSize(0.055);
   qcd_fxn1->GetYaxis()->SetTitleOffset(1.6);
   qcd_fxn1->GetYaxis()->SetTitleFont(42);
   qcd_fxn1->SetParameter(0,3.1e+07);
   qcd_fxn1->SetParError(0,0);
   qcd_fxn1->SetParLimits(0,0,0);
   qcd_fxn1->SetParameter(1,-3.1);
   qcd_fxn1->SetParError(1,0);
   qcd_fxn1->SetParLimits(1,0,0);
   qcd_fxn1->SetParameter(2,0.062);
   qcd_fxn1->SetParError(2,0);
   qcd_fxn1->SetParLimits(2,0,0);
   qcd_fxn1->Draw("same l");
   TLatex *   tex = new TLatex(0.485,0.66,"#zeta = 3.1 #times 10^{7} (M_{R} / GeV)^{-3.1} + 0.062");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.4,0.7,0.75,0.86,NULL,"brNDC");
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data Control Region","pel");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","QCD MC Simulation","pel");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("fxn_plus_err","Functional Form Model","lf");

   ci = TColor::GetColor("#0099ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3254);

   ci = TColor::GetColor("#0000cc");
   entry->SetLineColor(ci);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.18,0.93,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.71,0.93,"2.3 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
