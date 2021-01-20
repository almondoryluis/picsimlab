CPWindow3::CPWindow3(void)
{
//lxrad automatic generated block start, don't edit below!
  SetFOwner(this);
  SetClass(lxT("CPWindow"));
  SetName(lxT("window3"));
  SetTag(0);
  SetX(401);
  SetY(215);
  SetWidth(334);
  SetHeight(297);
  SetHint(lxT(""));
  SetEnable(1);
  SetVisible(0);
  SetPopupMenu(NULL);
  SetTitle(lxT("PICSimLab - Configuration"));
  SetOverrideRedirect(0);
  EvOnCreate=EVONCREATE & CPWindow3::_EvOnCreate;
  EvOnShow=EVONSHOW & CPWindow3::_EvOnShow;
  //label1
  label1.SetFOwner(this);
  label1.SetClass(lxT("CLabel"));
  label1.SetName(lxT("label1"));
  label1.SetTag(0);
  label1.SetX(53);
  label1.SetY(39);
  label1.SetWidth(87);
  label1.SetHeight(20);
  label1.SetHint(lxT(""));
  label1.SetEnable(1);
  label1.SetVisible(1);
  label1.SetPopupMenu(NULL);
  label1.SetText(lxT("Serial Port:"));
  label1.SetAlign(1);
  CreateChild(&label1);
  //label2
  label2.SetFOwner(this);
  label2.SetClass(lxT("CLabel"));
  label2.SetName(lxT("label2"));
  label2.SetTag(0);
  label2.SetX(58);
  label2.SetY(163);
  label2.SetWidth(82);
  label2.SetHeight(20);
  label2.SetHint(lxT(""));
  label2.SetEnable(1);
  label2.SetVisible(1);
  label2.SetPopupMenu(NULL);
  label2.SetText(lxT("Prog. Port:"));
  label2.SetAlign(1);
  CreateChild(&label2);
  //button1
  button1.SetFOwner(this);
  button1.SetClass(lxT("CButton"));
  button1.SetName(lxT("button1"));
  button1.SetTag(0);
  button1.SetX(63);
  button1.SetY(196);
  button1.SetWidth(93);
  button1.SetHeight(28);
  button1.SetHint(lxT(""));
  button1.SetEnable(1);
  button1.SetVisible(1);
  button1.SetPopupMenu(NULL);
  button1.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow3::button1_EvMouseButtonClick;
  button1.SetText(lxT("Ok"));
  CreateChild(&button1);
  //combo1
  combo1.SetFOwner(this);
  combo1.SetClass(lxT("CCombo"));
  combo1.SetName(lxT("combo1"));
  combo1.SetTag(0);
  combo1.SetX(143);
  combo1.SetY(36);
  combo1.SetWidth(137);
  combo1.SetHeight(26);
  combo1.SetHint(lxT(""));
  combo1.SetEnable(1);
  combo1.SetVisible(1);
  combo1.SetPopupMenu(NULL);
  combo1.SetItems(lxT(""));
  combo1.SetText(lxT(""));
  combo1.SetReadOnly(0);
  CreateChild(&combo1);
  //combo2
  combo2.SetFOwner(this);
  combo2.SetClass(lxT("CCombo"));
  combo2.SetName(lxT("combo2"));
  combo2.SetTag(0);
  combo2.SetX(143);
  combo2.SetY(160);
  combo2.SetWidth(137);
  combo2.SetHeight(26);
  combo2.SetHint(lxT(""));
  combo2.SetEnable(0);
  combo2.SetVisible(1);
  combo2.SetPopupMenu(NULL);
  combo2.SetItems(lxT(""));
  combo2.SetText(lxT(""));
  combo2.SetReadOnly(0);
  CreateChild(&combo2);
  //label3
  label3.SetFOwner(this);
  label3.SetClass(lxT("CLabel"));
  label3.SetName(lxT("label3"));
  label3.SetTag(0);
  label3.SetX(64);
  label3.SetY(100);
  label3.SetWidth(77);
  label3.SetHeight(20);
  label3.SetHint(lxT(""));
  label3.SetEnable(1);
  label3.SetVisible(1);
  label3.SetPopupMenu(NULL);
  label3.SetText(lxT("AVR DBG:"));
  label3.SetAlign(1);
  CreateChild(&label3);
  //combo3
  combo3.SetFOwner(this);
  combo3.SetClass(lxT("CCombo"));
  combo3.SetName(lxT("combo3"));
  combo3.SetTag(0);
  combo3.SetX(143);
  combo3.SetY(98);
  combo3.SetWidth(137);
  combo3.SetHeight(26);
  combo3.SetHint(lxT(""));
  combo3.SetEnable(1);
  combo3.SetVisible(1);
  combo3.SetPopupMenu(NULL);
  combo3.SetItems(lxT("GDB,MDB,"));
  combo3.SetText(lxT("GDB"));
  combo3.SetReadOnly(0);
  CreateChild(&combo3);
  //label4
  label4.SetFOwner(this);
  label4.SetClass(lxT("CLabel"));
  label4.SetName(lxT("label4"));
  label4.SetTag(0);
  label4.SetX(32);
  label4.SetY(69);
  label4.SetWidth(109);
  label4.SetHeight(20);
  label4.SetHint(lxT(""));
  label4.SetEnable(1);
  label4.SetVisible(1);
  label4.SetPopupMenu(NULL);
  label4.SetText(lxT("DBG TCP Port:"));
  label4.SetAlign(1);
  CreateChild(&label4);
  //spin1
  spin1.SetFOwner(this);
  spin1.SetClass(lxT("CSpin"));
  spin1.SetName(lxT("spin1"));
  spin1.SetTag(0);
  spin1.SetX(143);
  spin1.SetY(67);
  spin1.SetWidth(139);
  spin1.SetHeight(26);
  spin1.SetHint(lxT(""));
  spin1.SetEnable(1);
  spin1.SetVisible(1);
  spin1.SetPopupMenu(NULL);
  spin1.SetValue(1234);
  spin1.SetMin(0);
  spin1.SetMax(65535);
  CreateChild(&spin1);
  //spin2
  spin2.SetFOwner(this);
  spin2.SetClass(lxT("CSpin"));
  spin2.SetName(lxT("spin2"));
  spin2.SetTag(0);
  spin2.SetX(143);
  spin2.SetY(129);
  spin2.SetWidth(139);
  spin2.SetHeight(26);
  spin2.SetHint(lxT(""));
  spin2.SetEnable(1);
  spin2.SetVisible(1);
  spin2.SetPopupMenu(NULL);
  spin2.SetValue(5000);
  spin2.SetMin(0);
  spin2.SetMax(65535);
  CreateChild(&spin2);
  //label5
  label5.SetFOwner(this);
  label5.SetClass(lxT("CLabel"));
  label5.SetName(lxT("label5"));
  label5.SetTag(0);
  label5.SetX(25);
  label5.SetY(132);
  label5.SetWidth(116);
  label5.SetHeight(20);
  label5.SetHint(lxT(""));
  label5.SetEnable(1);
  label5.SetVisible(1);
  label5.SetPopupMenu(NULL);
  label5.SetText(lxT("Remote C. Port:"));
  label5.SetAlign(1);
  CreateChild(&label5);
  //button2
  button2.SetFOwner(this);
  button2.SetClass(lxT("CButton"));
  button2.SetName(lxT("button2"));
  button2.SetTag(0);
  button2.SetX(173);
  button2.SetY(196);
  button2.SetWidth(93);
  button2.SetHeight(28);
  button2.SetHint(lxT(""));
  button2.SetEnable(1);
  button2.SetVisible(1);
  button2.SetPopupMenu(NULL);
  button2.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow3::button2_EvMouseButtonClick;
  button2.SetText(lxT("Cancel"));
  CreateChild(&button2);
  /*#Others*/
//lxrad automatic generated block end, don't edit above!
};