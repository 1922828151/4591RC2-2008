/*
 * func-name: ?PushControlBox@CControlBoxList@@QAEHPAVCControlBox@@@Z
 * func-address: 0x10157340
 * callers: none
 * callees: 0x100b3480, 0x10151740, 0x10152470, 0x10158ff0
 */

int __thiscall CControlBoxList::PushControlBox(struct CREDialog **this, struct CControlBox *a2)
{
  char *v3; // edi
  struct CREControl *v4; // ebx
  int v5; // eax

  v3 = (char *)(this + 133);
  sub_10158FF0((int)(this + 133), (int)&a2);
  v4 = a2;
  CControlBox::InitAllControl(a2, this[28]);
  CREDialog::InitControl(this[28], v4);
  CControlBoxList::CalcScrollBar((CControlBoxList *)this);
  v5 = *((_DWORD *)v3 + 1);
  if ( v5 )
    return ((*((_DWORD *)v3 + 2) - v5) >> 2) - 1;
  else
    return -1;
}
