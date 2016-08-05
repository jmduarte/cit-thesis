{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Jan 20 19:45:16 2015) by ROOT version5.34/21
   TCanvas *c2 = new TCanvas("c2", "c2",1,45,650,376);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(2.320484,-1.023909,3.744457,0.3094246);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetLogx();
   c2->SetLogy();
   c2->SetBottomMargin(0.15);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   Double_t xAxis1[10] = {400, 450, 500, 550, 700, 900, 1200, 1600, 2500, 4000}; 
   Double_t yAxis1[8] = {0.15, 0.2, 0.3, 0.41, 0.52, 0.64, 0.8, 1.5}; 
   
   TH2D *hNS = new TH2D("hNS","Other boxes",9, xAxis1,7, yAxis1);
   hNS->SetMinimum(-5.1);
   hNS->SetMaximum(5.1);
   hNS->SetStats(0);
   hNS->SetContour(3);
   hNS->SetContourLevel(0,-5.1);
   hNS->SetContourLevel(1,-1.7);
   hNS->SetContourLevel(2,1.7);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hNS->SetLineColor(ci);
   hNS->GetXaxis()->SetTitle("M_{R} [GeV]");
   hNS->GetXaxis()->SetMoreLogLabels();
   hNS->GetXaxis()->SetNoExponent();
   hNS->GetXaxis()->SetLabelFont(42);
   hNS->GetXaxis()->SetLabelSize(0.065);
   hNS->GetXaxis()->SetTitleSize(0.065);
   hNS->GetXaxis()->SetTitleFont(42);
   hNS->GetYaxis()->SetTitle("R^{2}");
   hNS->GetYaxis()->SetNoExponent();
   hNS->GetYaxis()->SetLabelFont(42);
   hNS->GetYaxis()->SetLabelSize(0.065);
   hNS->GetYaxis()->SetTitleSize(0.065);
   hNS->GetYaxis()->SetTitleOffset(0.7);
   hNS->GetYaxis()->SetTitleFont(42);
   hNS->GetZaxis()->SetLabelFont(42);
   hNS->GetZaxis()->SetLabelSize(0.065);
   hNS->GetZaxis()->SetTitleSize(0.065);
   hNS->GetZaxis()->SetTitleFont(42);
   hNS->Draw("colz");
   TLine *line = new TLine(400,0.2,4000,0.2);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(400,0.3,4000,0.3);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(400,0.41,4000,0.41);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(400,0.52,4000,0.52);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(400,0.64,4000,0.64);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(400,0.8,4000,0.8);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(450,0.15,450,1.5);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(500,0.15,500,1.5);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(550,0.15,550,1.5);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(700,0.15,700,1.5);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(900,0.15,900,1.5);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1200,0.15,1200,1.5);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1600,0.15,1600,1.5);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2500,0.15,2500,1.5);
   line->SetLineColor(17);
   line->SetLineStyle(2);
   line->Draw();
   
   TGraph *graph = new TGraph(5);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetPoint(0,400,0.15);
   graph->SetPoint(1,400,0.2);
   graph->SetPoint(2,500,0.2);
   graph->SetPoint(3,500,0.15);
   graph->SetPoint(4,400,0.15);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph11111 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph11111","Graph",100,295,355);
   Graph_Graph_Graph_Graph_Graph_Graph11111->SetMinimum(0.145);
   Graph_Graph_Graph_Graph_Graph_Graph11111->SetMaximum(0.205);
   Graph_Graph_Graph_Graph_Graph_Graph11111->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph11111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph11111->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph11111->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph11111);
   
   //graph->Draw("f");
   
   graph = new TGraph(5);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#6666cc");
   graph->SetFillColor(ci);
   graph->SetPoint(0,400.,0.2);
   graph->SetPoint(1,500.,0.2);
   graph->SetPoint(2,500.,1.5);
   graph->SetPoint(3,400.,1.5);
   graph->SetPoint(4,400.,0.2);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph22222 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph22222","Graph",100,285,465);
   Graph_Graph_Graph_Graph_Graph_Graph22222->SetMinimum(0.07);
   Graph_Graph_Graph_Graph_Graph_Graph22222->SetMaximum(1.63);
   Graph_Graph_Graph_Graph_Graph_Graph22222->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph22222->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph22222->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph22222->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph22222);
   
   graph->Draw("f");
   
   graph = new TGraph(5);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ff9900");
   graph->SetFillColor(ci);
   graph->SetPoint(0,400,0.15);
   graph->SetPoint(1,4000,0.15);
   graph->SetPoint(2,4000,0.2);
   graph->SetPoint(3,400,0.2);
   graph->SetPoint(4,400,0.15);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph33333 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph33333","Graph",100,315,4365);
   Graph_Graph_Graph_Graph_Graph_Graph33333->SetMinimum(0.145);
   Graph_Graph_Graph_Graph_Graph_Graph33333->SetMaximum(0.205);
   Graph_Graph_Graph_Graph_Graph_Graph33333->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph33333->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph33333->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph33333->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph33333);
   
   graph->Draw("f");
   
   graph = new TGraph(5);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ccccff");
   graph->SetFillColor(ci);
   graph->SetPoint(0,500.,0.2);
   graph->SetPoint(1,4000,0.2);
   graph->SetPoint(2,4000,1.5);
   graph->SetPoint(3,500,1.5);
   graph->SetPoint(4,500,0.2);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph44444 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph44444","Graph",100,95,4355);
   Graph_Graph_Graph_Graph_Graph_Graph44444->SetMinimum(0.07);
   Graph_Graph_Graph_Graph_Graph_Graph44444->SetMaximum(1.63);
   Graph_Graph_Graph_Graph_Graph_Graph44444->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph44444->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph44444->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph44444->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph44444);
   
   graph->Draw("f");
   line = new TLine(400,0.15,4000,0.15);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(500,0.2,4000,0.2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(500,0.2,500,1.5);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(400,0.15,400,1.5);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(400,1.5,500,1.5);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4000,0.15,4000,0.15);
   line->SetLineWidth(2);
   line->Draw();
   TLatex *   tex = new TLatex(340,0.75,"0.8");
   tex->SetTextFont(42);
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(340,0.375,"0.4");
   tex->SetTextFont(42);
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(340,0.19,"0.2");
   tex->SetTextFont(42);
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.235,0.4985673,0.8955449,0.8825215,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph1","Low M_{R} sideband: 400 < M_{R} < 500 GeV and R^{2} > 0.2","F");

   ci = TColor::GetColor("#6666cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Low R^{2} sideband: M_{R} > 400 GeV and 0.15 < R^{2} < 0.2","F");

   ci = TColor::GetColor("#ff9900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Signal-sensitive region: M_{R} > 450 GeV and R^{2} > 0.2","F");

   ci = TColor::GetColor("#ccccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.35,0.85,0.65,1,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(21);
   pt->SetTextFont(42);
   pt->SetTextSize(0.072);
   text = pt->AddText("Leptonic categories");
   pt->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);

   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
   c2->SaveAs("SidebandL_Mu.pdf");

}
