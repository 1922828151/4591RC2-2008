/*
 * func-name: ?InitAllControlInControlBox@CControlBoxList@@QAEXPAVCControlBox@@@Z
 * func-address: 0x10152370
 * callers: none
 * callees: 0x10151740
 */

void __thiscall CControlBoxList::InitAllControlInControlBox(struct CREDialog **this, struct CControlBox *a2)
{
  CControlBox::InitAllControl(a2, this[28]);
}
