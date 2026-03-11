/*
 * func-name: sub_1014F930
 * func-address: 0x1014f930
 * callers: 0x1014a540
 * callees: 0x10075e80, 0x1014e9b0, 0x1014ec10
 */

char __thiscall sub_1014F930(_DWORD *this, int a2, int a3)
{
  char *v4; // esi
  GUISystem *v5; // ecx
  char *v6; // ebx
  void (__cdecl *v7)(); // esi
  int v8; // ebp
  struct ControlFactory *ControlFactory; // eax
  void (__thiscall ***v10)(_DWORD, int, _DWORD); // esi
  int v12; // [esp-4h] [ebp-24h]
  char *v13; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+14h] [ebp-Ch]
  int v15; // [esp+1Ch] [ebp-4h]

  v4 = (char *)(this + 1);
  sub_1014E9B0(this + 1, &v13, a2);
  v6 = v13;
  v15 = *((_DWORD *)v4 + 1);
  if ( v13 && v13 == v4 )
  {
    v7 = invalid_parameter_noinfo;
  }
  else
  {
    v7 = invalid_parameter_noinfo;
    invalid_parameter_noinfo();
  }
  v8 = v14;
  if ( v14 == v15 )
    return 0;
  if ( !v6 )
    v7();
  if ( v8 == *((_DWORD *)v6 + 1) )
    v7();
  v12 = *(_DWORD *)(v8 + 40);
  ControlFactory = GUISystem::GetControlFactory(v5);
  v10 = (void (__thiscall ***)(_DWORD, int, _DWORD))sub_1014EC10(ControlFactory, v12);
  if ( !v10 )
    return 0;
  if ( v8 == *((_DWORD *)v6 + 1) )
    invalid_parameter_noinfo();
  (**v10)(v10, a3, *(_DWORD *)(v8 + 48));
  (*(void (__thiscall **)(_DWORD *, int))*this)(this, a2);
  return 1;
}
