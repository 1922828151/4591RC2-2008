/*
 * func-name: ?RemoveControlBox@CControlBoxList@@QAE_NH@Z
 * func-address: 0x10155480
 * callers: 0x10155530
 * callees: 0x1001e9c0, 0x10152470
 */

char __thiscall CControlBoxList::RemoveControlBox(CControlBoxList *this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // ebx
  char *v6; // edi
  bool v7; // cc
  int v9[2]; // [esp+Ch] [ebp-8h] BYREF

  if ( a2 < 0 )
    return 0;
  v3 = *((_DWORD *)this + 134);
  if ( !v3 || a2 >= (unsigned int)((*((_DWORD *)this + 135) - v3) >> 2) )
    return 0;
  v4 = *(_DWORD *)(*((_DWORD *)this + 134) + 4 * a2);
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, 1);
  v5 = *((_DWORD *)this + 134);
  if ( v5 > *((_DWORD *)this + 135) )
    invalid_parameter_noinfo();
  v6 = (char *)(v5 + 4 * a2);
  v7 = (unsigned int)v6 <= *((_DWORD *)this + 135);
  v9[1] = v5;
  if ( !v7 || (unsigned int)v6 < *((_DWORD *)this + 134) )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase((_DWORD *)this + 133, v9, (int)this + 532, v6);
  CControlBoxList::CalcScrollBar(this);
  return 1;
}
