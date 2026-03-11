/*
 * func-name: sub_1013F070
 * func-address: 0x1013f070
 * callers: 0x1013f070, 0x1013f3a0, 0x1013f480
 * callees: 0x100a1d10, 0x1013f070, 0x1017a0b0, 0x101a2500
 */

void __thiscall sub_1013F070(int this)
{
  char *v2; // esi
  bool v3; // cc
  int v4; // edi
  char *v5; // ebp
  char *v6; // ebp
  char *v7; // eax
  void *v8; // ebp
  void *v9; // ebp
  int v10[3]; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+20h] [ebp-4h]

  v10[2] = this;
  v2 = *(char **)(this + 48);
  v3 = *(_DWORD *)(this + 44) <= (unsigned int)v2;
  v4 = this + 40;
  v11 = 2;
  if ( !v3 )
    invalid_parameter_noinfo();
  v5 = *(char **)(v4 + 4);
  if ( (unsigned int)v5 > *(_DWORD *)(v4 + 8) )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase((_DWORD *)v4, v10, v4, v5, v4, v2);
  v6 = *(char **)(this + 64);
  if ( *(_DWORD *)(this + 60) > (unsigned int)v6 )
    invalid_parameter_noinfo();
  v7 = *(char **)(this + 60);
  v3 = (unsigned int)v7 <= *(_DWORD *)(this + 64);
  v10[0] = (int)v7;
  if ( !v3 )
  {
    invalid_parameter_noinfo();
    v7 = (char *)v10[0];
  }
  std::vector<Model *>::erase((_DWORD *)(this + 56), v10, this + 56, v7, this + 56, v6);
  v8 = *(void **)(this + 8);
  if ( v8 )
  {
    sub_1013F070(*(_DWORD *)(this + 8));
    operator delete(v8);
    *(_DWORD *)(this + 8) = 0;
  }
  v9 = *(void **)(this + 12);
  if ( v9 )
  {
    sub_1013F070(*(_DWORD *)(this + 12));
    operator delete(v9);
    *(_DWORD *)(this + 12) = 0;
  }
  LOBYTE(v11) = 1;
  sub_1017A0B0(this + 72);
  if ( *(_DWORD *)(this + 60) )
    operator delete(*(void **)(this + 60));
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 68) = 0;
  if ( *(_DWORD *)(v4 + 4) )
    operator delete(*(void **)(v4 + 4));
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
}
