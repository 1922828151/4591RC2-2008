/*
 * func-name: ?Show@CMiniWorldMapUI@@QAEXXZ_0
 * func-address: 0x10277af0
 * callers: 0x10005105
 * callees: none
 */

void __thiscall CMiniWorldMapUI::Show(CMiniWorldMapUI *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  void (__thiscall *v7)(CMiniWorldMapUI *); // eax

  v2 = *((_DWORD *)this + 173);
  CTYDialog::NestToEdge(this, 4u);
  v3 = *((_DWORD *)this + 173);
  *((_DWORD *)this + 173) = v2;
  CTYDialog::MoveNestedDialog(this);
  v4 = *((_DWORD *)this + 173);
  *((float *)this + 946) = 400.0;
  v5 = *(_DWORD *)this;
  *((_DWORD *)this + 947) = v4;
  v6 = *((_DWORD *)this + 174);
  *((_DWORD *)this + 948) = v6;
  *((_DWORD *)this + 950) = v6;
  v7 = *(void (__thiscall **)(CMiniWorldMapUI *))(v5 + 32);
  *((_DWORD *)this + 943) = 4;
  *((_DWORD *)this + 949) = v3;
  *((_BYTE *)this + 3868) = 1;
  v7(this);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 970) + 136))(*((_DWORD *)this + 970), 0);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 969) + 136))(*((_DWORD *)this + 969), 1);
}
