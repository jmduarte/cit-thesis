{
//=========Macro generated from canvas: c/c
//=========  (Sun Feb  7 21:17:07 2016) by ROOT version5.34/31
   TCanvas *c = new TCanvas("c", "c",0,45,500,364);
   c->SetHighLightColor(2);
   c->Range(121.25,-0.5886588,208.75,2.287629);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraphErrors *gre = new TGraphErrors(19);
   gre->SetName("Graph");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#6666ff");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   gre->SetLineColor(ci);
   gre->SetPoint(0,120,5.55);
   gre->SetPointError(0,0,0.35);
   gre->SetPoint(1,125,4.76);
   gre->SetPointError(1,0,0.284);
   gre->SetPoint(2,130,4.12);
   gre->SetPointError(2,0,0.255);
   gre->SetPoint(3,135,3.55);
   gre->SetPointError(3,0,0.204);
   gre->SetPoint(4,140,3.1);
   gre->SetPointError(4,0,0.172);
   gre->SetPoint(5,145,2.71);
   gre->SetPointError(5,0,0.154);
   gre->SetPoint(6,150,2.39);
   gre->SetPointError(6,0,0.126);
   gre->SetPoint(7,155,2.11);
   gre->SetPointError(7,0,0.118);
   gre->SetPoint(8,160,1.86);
   gre->SetPointError(8,0,0.0932);
   gre->SetPoint(9,165,1.66);
   gre->SetPointError(9,0,0.0871);
   gre->SetPoint(10,170,1.48);
   gre->SetPointError(10,0,0.0751);
   gre->SetPoint(11,175,1.32);
   gre->SetPointError(11,0,0.0672);
   gre->SetPoint(12,180,1.18);
   gre->SetPointError(12,0,0.0587);
   gre->SetPoint(13,185,1.06);
   gre->SetPointError(13,0,0.0525);
   gre->SetPoint(14,190,0.96);
   gre->SetPointError(14,0,0.0461);
   gre->SetPoint(15,195,0.869);
   gre->SetPointError(15,0,0.0407);
   gre->SetPoint(16,200,0.785);
   gre->SetPointError(16,0,0.0373);
   gre->SetPoint(17,205,0.712);
   gre->SetPointError(17,0,0.0326);
   gre->SetPoint(18,210,0.647);
   gre->SetPointError(18,0,0.03);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,111,219);
   Graph_Graph1->SetMinimum(0.0887);
   Graph_Graph1->SetMaximum(6.4283);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   multigraph->Add(gre,"");
   
   TGraph *graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,130,2.65);
   graph->SetPoint(1,150,2.55);
   graph->SetPoint(2,160,2.55);
   graph->SetPoint(3,175,2.25);
   graph->SetPoint(4,200,2.15);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,123,207);
   Graph_Graph1->SetMinimum(2.1);
   Graph_Graph1->SetMaximum(2.7);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,130,3.06163);
   graph->SetPoint(1,140,2.70946);
   graph->SetPoint(2,150,2.43252);
   graph->SetPoint(3,160,2.28013);
   graph->SetPoint(4,170,2.15271);
   graph->SetPoint(5,180,1.97481);
   graph->SetPoint(6,190,1.73514);
   graph->SetPoint(7,200,1.5163);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,123,207);
   Graph_Graph2->SetMinimum(1.361767);
   Graph_Graph2->SetMaximum(3.216163);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,130,2.94273);
   graph->SetPoint(1,140,2.5483);
   graph->SetPoint(2,150,2.23872);
   graph->SetPoint(3,160,2.0388);
   graph->SetPoint(4,170,1.85674);
   graph->SetPoint(5,180,1.69093);
   graph->SetPoint(6,190,1.53993);
   graph->SetPoint(7,200,1.39237);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,123,207);
   Graph_Graph3->SetMinimum(1.237334);
   Graph_Graph3->SetMaximum(3.097766);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"");
   multigraph->Draw("a3");
   multigraph->GetXaxis()->SetTitle("m_{#tilde{#chi}^{#pm}_{1}} [GeV]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.045);
   multigraph->GetXaxis()->SetTitleSize(0.045);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("95% CL Upper Limit Cross Section #sigma_{up} [pb]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.045);
   multigraph->GetYaxis()->SetTitleSize(0.045);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   graph = new TGraph(5);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,130,2.65);
   graph->SetPoint(1,150,2.55);
   graph->SetPoint(2,160,2.55);
   graph->SetPoint(3,175,2.25);
   graph->SetPoint(4,200,2.15);
   
   TH1F *Graph_Graph_Graph14 = new TH1F("Graph_Graph_Graph14","Graph",100,123,207);
   Graph_Graph_Graph14->SetMinimum(2.1);
   Graph_Graph_Graph14->SetMaximum(2.7);
   Graph_Graph_Graph14->SetDirectory(0);
   Graph_Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph14->SetLineColor(ci);
   Graph_Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph14->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph14->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph14->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph14->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph14->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph14->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph14);
   
   graph->Draw("l ");
   
   graph = new TGraph(5);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,130,2.55);
   graph->SetPoint(1,150,2.35);
   graph->SetPoint(2,160,2.25);
   graph->SetPoint(3,175,2.05);
   graph->SetPoint(4,200,1.75);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,123,207);
   Graph_Graph5->SetMinimum(1.67);
   Graph_Graph5->SetMaximum(2.63);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("l ");
   
   graph = new TGraph(8);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,130,3.06163);
   graph->SetPoint(1,140,2.70946);
   graph->SetPoint(2,150,2.43252);
   graph->SetPoint(3,160,2.28013);
   graph->SetPoint(4,170,2.15271);
   graph->SetPoint(5,180,1.97481);
   graph->SetPoint(6,190,1.73514);
   graph->SetPoint(7,200,1.5163);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,123,207);
   Graph_Graph_Graph26->SetMinimum(1.361767);
   Graph_Graph_Graph26->SetMaximum(3.216163);
   Graph_Graph_Graph26->SetDirectory(0);
   Graph_Graph_Graph26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph26->SetLineColor(ci);
   Graph_Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph26);
   
   graph->Draw("l ");
   
   graph = new TGraph(8);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,130,2.94273);
   graph->SetPoint(1,140,2.5483);
   graph->SetPoint(2,150,2.23872);
   graph->SetPoint(3,160,2.0388);
   graph->SetPoint(4,170,1.85674);
   graph->SetPoint(5,180,1.69093);
   graph->SetPoint(6,190,1.53993);
   graph->SetPoint(7,200,1.39237);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,123,207);
   Graph_Graph_Graph37->SetMinimum(1.237334);
   Graph_Graph_Graph37->SetMaximum(3.097766);
   Graph_Graph_Graph37->SetDirectory(0);
   Graph_Graph_Graph37->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph37->SetLineColor(ci);
   Graph_Graph_Graph37->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph37->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph37->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph37);
   
   graph->Draw("l ");
   
   graph = new TGraph(19);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,120,5.55);
   graph->SetPoint(1,125,4.76);
   graph->SetPoint(2,130,4.12);
   graph->SetPoint(3,135,3.55);
   graph->SetPoint(4,140,3.1);
   graph->SetPoint(5,145,2.71);
   graph->SetPoint(6,150,2.39);
   graph->SetPoint(7,155,2.11);
   graph->SetPoint(8,160,1.86);
   graph->SetPoint(9,165,1.66);
   graph->SetPoint(10,170,1.48);
   graph->SetPoint(11,175,1.32);
   graph->SetPoint(12,180,1.18);
   graph->SetPoint(13,185,1.06);
   graph->SetPoint(14,190,0.96);
   graph->SetPoint(15,195,0.869);
   graph->SetPoint(16,200,0.785);
   graph->SetPoint(17,205,0.712);
   graph->SetPoint(18,210,0.647);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,111,219);
   Graph_Graph8->SetMinimum(0.1567);
   Graph_Graph8->SetMaximum(6.0403);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   graph->Draw("l ");
   TLatex *   tex = new TLatex(0.15,0.84,"Pythia+Delphes (8 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.77,"razor Total");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.52,0.84,"pp #rightarrow #tilde{#chi}^{#pm}_{1}#tilde{#chi}^{0}_{2}, #tilde{#chi}_{1}^{#pm}#rightarrowW^{#pm}#tilde{#chi}^{0}_{1},  #tilde{#chi}_{2}^{0}#rightarrowH#tilde{#chi}^{0}_{1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.52,0.78,"m_{#tilde{#chi}^{0}_{1}} = 1 GeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.5,0.43,0.85,0.68,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","#sigma_{NLO+NLL} (#tilde{#chi}^{#pm}_{1}#tilde{#chi}^{0}_{2}) #pm 1 #sigma (theory)","lf");

   ci = TColor::GetColor("#6666ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","observed (emulation)","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","expected (emulation)","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","observed (CMS)","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","expected (CMS)","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
