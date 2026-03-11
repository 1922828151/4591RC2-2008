/*
 * func-name: sub_1028AB10
 * func-address: 0x1028ab10
 * callers: 0x100033dc
 * callees: 0x100151ae, 0x102c9d98
 */

int __thiscall sub_1028AB10(int this)
{
  _DWORD *v2; // eax
  EventAttemper *v3; // eax
  int v5; // [esp+8h] [ebp-1Ch]
  int v6; // [esp+Ch] [ebp-18h]
  int v7; // [esp+10h] [ebp-14h]

  CTYDialog::CTYDialog((CTYDialog *)this);
  *(_DWORD *)this = &CSelfCorpUI::`vftable';
  *(_BYTE *)(this + 3913) = 1;
  *(_BYTE *)(this + 3914) = 1;
  *(_DWORD *)(this + 3920) = 0;
  *(_DWORD *)(this + 3924) = -1;
  CREEditBox::CUniBuffer::CUniBuffer((CREEditBox::CUniBuffer *)(this + 3928), 1);
  *(_DWORD *)(this + 88) = 16;
  *(_DWORD *)(this + 3836) = 1;
  CTYDialog::ShowDialog((CTYDialog *)this, 0, 0.0);
  *(_DWORD *)(this + 168) = 2;
  sub_100151AE(v5, v6, v7, this);
  *(float *)(this + 3908) = *(float *)&GSeconds;
  *(_BYTE *)(this + 3912) = 0;
  v2 = operator new(4u);
  if ( v2 )
    *v2 = &CorpCmdUpdatedObserver::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(9, 1100);
  *(_DWORD *)(this + 3952) = EventAttemper::AddObserver(v3);
  return this;
}
