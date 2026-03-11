/*
 * func-name: ?Hide@CDropBagUI@@QAEXXZ_0
 * func-address: 0x10268cf0
 * callers: 0x100174ef
 * callees: none
 */

void __thiscall CDropBagUI::Hide(CDropBagUI *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  void (__thiscall *v7)(CDropBagUI *); // eax

  v2 = *((_DWORD *)this + 173);
  *((float *)this + 946) = 400.0;
  v3 = *((_DWORD *)this + 175);
  v4 = *((_DWORD *)this + 174);
  *((_DWORD *)this + 947) = v2;
  v5 = v3 + v2 + 26;
  v6 = *(_DWORD *)this;
  *((_DWORD *)this + 948) = v4;
  *((_DWORD *)this + 949) = v5;
  v7 = *(void (__thiscall **)(CDropBagUI *))(v6 + 32);
  *((_DWORD *)this + 950) = v4;
  *((_DWORD *)this + 943) = 4;
  *((_BYTE *)this + 3868) = 1;
  v7(this);
  CTYDialog::SetHasInput(this, 0);
}
