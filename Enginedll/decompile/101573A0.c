/*
 * func-name: ?InsertControlBox@CControlBoxList@@QAEXPAVCControlBox@@H@Z
 * func-address: 0x101573a0
 * callers: none
 * callees: 0x100b3480, 0x10151740, 0x10152470, 0x10158d90, 0x10158ff0
 */

void __thiscall CControlBoxList::InsertControlBox(CControlBoxList *this, struct CControlBox *a2, unsigned int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  int v6; // edi
  void *v7; // edi
  struct CREControl *v8; // esi
  int v9[2]; // [esp+Ch] [ebp-8h] BYREF

  v4 = *((_DWORD *)this + 134);
  if ( v4 && (v5 = a3, a3 < (int)(*((_DWORD *)this + 135) - v4) >> 2) )
  {
    v6 = v4;
    if ( v4 > *((_DWORD *)this + 135) )
      invalid_parameter_noinfo();
    v9[1] = v6;
    v7 = (void *)(v6 + 4 * v5);
    if ( (unsigned int)v7 > *((_DWORD *)this + 135) || (unsigned int)v7 < *((_DWORD *)this + 134) )
      invalid_parameter_noinfo();
    sub_10158D90((int)v9, (int)this + 532, v7, (int)&a2);
  }
  else
  {
    sub_10158FF0((int)this + 532, (int)&a2);
  }
  v8 = a2;
  CControlBox::InitAllControl(a2, *((struct CREDialog **)this + 28));
  CREDialog::InitControl(*((CREDialog **)this + 28), v8);
  CControlBoxList::CalcScrollBar(this);
}
