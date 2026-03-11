/*
 * func-name: ?Show@CDropBagUI@@QAEXXZ_0
 * func-address: 0x10268c60
 * callers: 0x1000d855
 * callees: none
 */

void __thiscall CDropBagUI::Show(CDropBagUI *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx
  int v5; // eax
  void (__thiscall *v6)(CDropBagUI *); // edx

  CTYDialog::CenterDialog(this, 0, 1);
  CTYDialog::NestToEdge(this, 4u);
  v2 = *((_DWORD *)this + 173);
  *((_DWORD *)this + 173) = *((_DWORD *)this + 175) + v2 + 26;
  CTYDialog::MoveNestedDialog(this);
  v3 = *((_DWORD *)this + 174);
  *((float *)this + 946) = 400.0;
  v4 = *((_DWORD *)this + 173);
  *((_DWORD *)this + 948) = v3;
  *((_DWORD *)this + 950) = v3;
  v5 = *(_DWORD *)this;
  *((_DWORD *)this + 947) = v4;
  v6 = *(void (__thiscall **)(CDropBagUI *))(v5 + 32);
  *((_DWORD *)this + 943) = 4;
  *((_DWORD *)this + 949) = v2;
  *((_BYTE *)this + 3868) = 1;
  v6(this);
  CTYDialog::SetHasInput(this, 1);
}
