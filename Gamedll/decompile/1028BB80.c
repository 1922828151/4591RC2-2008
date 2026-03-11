/*
 * func-name: ?RefreshWeaponStatus@CStatusUI@@AAEXXZ_0
 * func-address: 0x1028bb80
 * callers: 0x1000faec
 * callees: 0x1001290e
 */

void __thiscall CStatusUI::RefreshWeaponStatus(CStatusUI *this)
{
  CStatusUI *v1; // ebx
  unsigned int v2; // edi
  int v3; // esi
  int v4; // ecx
  int v5; // esi
  GameClient::Equip *v6; // ebp
  int v7; // ecx
  int v8; // eax
  CControlBox *v9; // esi
  struct CREControl *(__thiscall *v10)(CControlBox *__hidden, int); // ebx
  struct CREControl *v11; // eax
  struct CREControl *v12; // edi
  void (__thiscall **v13)(struct CREControl *, _DWORD); // ebx
  int v14; // eax
  struct CREControl *v15; // eax
  int v16; // ecx
  struct CREControl *v17; // eax
  int v18; // ecx
  struct CREControl *ControlByIndex; // eax
  int v20; // ecx
  struct CREControl *v21; // eax
  int v22; // ecx
  float CapacitancePercent; // [esp+4h] [ebp-20h]
  unsigned int v25; // [esp+1Ch] [ebp-8h]
  int v26; // [esp+20h] [ebp-4h]

  v1 = this;
  if ( *((_DWORD *)this + 1004) )
  {
    v2 = 0;
    v26 = *(_DWORD *)(*((_DWORD *)this + 1004) + 344) + *(_DWORD *)(*((_DWORD *)this + 1004) + 348);
    v25 = 0;
    if ( v26 > 0 )
    {
      do
      {
        v3 = *((_DWORD *)v1 + 1004);
        v4 = *(_DWORD *)(v3 + 252);
        v5 = v3 + 248;
        if ( !v4 || v2 >= (*(_DWORD *)(v5 + 8) - v4) >> 2 )
          _invalid_parameter_noinfo();
        v6 = *(GameClient::Equip **)(*(_DWORD *)(v5 + 4) + 4 * v2);
        if ( !v6 )
          goto LABEL_21;
        v7 = *((_DWORD *)v1 + 969);
        if ( !v7 || v2 >= (*((_DWORD *)v1 + 970) - v7) >> 2 )
          _invalid_parameter_noinfo();
        v8 = *((_DWORD *)v6 + 2);
        v9 = *(CControlBox **)(*((_DWORD *)v1 + 969) + 4 * v2);
        if ( *(int *)(v8 + 320) <= 0 )
        {
          if ( *(_DWORD *)(v8 + 316) || *(_BYTE *)(v8 + 2404) )
            goto LABEL_21;
          ControlByIndex = CControlBox::GetControlByIndex(v9, 3);
          if ( ControlByIndex )
          {
            LOBYTE(v20) = *((_DWORD *)v6 + 185) == 0;
            (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)ControlByIndex + 136))(ControlByIndex, v20);
          }
          v21 = CControlBox::GetControlByIndex(v9, 4);
          if ( v21 )
          {
            LOBYTE(v22) = *((_DWORD *)v6 + 185) == 1;
            (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v21 + 136))(v21, v22);
          }
        }
        else
        {
          v10 = CControlBox::GetControlByIndex;
          v11 = CControlBox::GetControlByIndex(v9, 3);
          v12 = v11;
          if ( v11 )
          {
            v13 = (void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v11 + 200);
            CapacitancePercent = GameClient::Equip::GetCapacitancePercent(v6);
            (*v13)(v12, LODWORD(CapacitancePercent));
            v10 = CControlBox::GetControlByIndex;
          }
          v14 = *((_DWORD *)v6 + 2);
          if ( !*(_DWORD *)(v14 + 316) && !*(_BYTE *)(v14 + 2404) )
          {
            v15 = v10(v9, 4);
            if ( v15 )
            {
              LOBYTE(v16) = *((_DWORD *)v6 + 185) == 0;
              (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v15 + 136))(v15, v16);
            }
            v17 = v10(v9, 5);
            if ( v17 )
            {
              LOBYTE(v18) = *((_DWORD *)v6 + 185) == 1;
              (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v17 + 136))(v17, v18);
            }
          }
          v2 = v25;
        }
        v1 = this;
LABEL_21:
        v25 = ++v2;
      }
      while ( (int)v2 < v26 );
    }
  }
}
