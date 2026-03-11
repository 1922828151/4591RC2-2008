/*
 * func-name: ?SetDoorState@EstabDoor@GameClient@@QAEXW4STATE_DOOR_TYPE@2@@Z_0
 * func-address: 0x101a0cf0
 * callers: 0x10018845
 * callees: none
 */

void __thiscall GameClient::EstabDoor::SetDoorState(_DWORD *this, int a2)
{
  int v3; // ecx
  unsigned int i; // edi
  int v5; // eax
  int v6; // eax
  Model *v7; // eax
  int v8; // esi
  int v9; // ecx
  unsigned int j; // edi
  int v11; // eax
  int v12; // eax

  this[119] = a2;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v3 = this[115];
      if ( v3 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 104))(v3, 1);
        for ( i = 0; i < (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[115] + 76))(this[115]); ++i )
        {
          v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[115] + 80))(this[115]);
          (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(v5 + 4 * i) + 20))(*(_DWORD *)(v5 + 4 * i), 64, 0);
        }
      }
      v6 = this[75];
      if ( v6 )
      {
        v7 = *(Model **)(v6 + 716);
        if ( v7 )
        {
          v8 = this[126];
          goto LABEL_15;
        }
      }
    }
  }
  else
  {
    v9 = this[115];
    if ( v9 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 100))(v9, 1);
      for ( j = 0; j < (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[115] + 76))(this[115]); ++j )
      {
        v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[115] + 80))(this[115]);
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v11 + 4 * j) + 20))(*(_DWORD *)(v11 + 4 * j), 64, 1);
      }
    }
    v12 = this[75];
    if ( v12 )
    {
      v7 = *(Model **)(v12 + 716);
      if ( v7 )
      {
        v8 = this[125];
LABEL_15:
        if ( v8 != -1 )
          Model::TransitionToAnimation(v7, v8, 0.0, -1.0, 0.0, 1.0);
      }
    }
  }
}
