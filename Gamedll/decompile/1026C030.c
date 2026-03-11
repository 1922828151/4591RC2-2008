/*
 * func-name: ?RefreshBag@CDropBagUI@@IAEXXZ_0
 * func-address: 0x1026c030
 * callers: 0x10015ec4
 * callees: 0x1000194c, 0x10001dfc, 0x100052d6, 0x10005f8d, 0x10007059, 0x1000a3a8, 0x1000c252, 0x1000dc0b, 0x1000e52f, 0x1000ed13, 0x1000f056, 0x1000fafb, 0x10011a3b, 0x100141eb, 0x1001a0f5, 0x1001a546, 0x102c8d6c, 0x102c9d50, 0x102c9ea8
 */

void __thiscall CDropBagUI::RefreshBag(CDropBagUI *this)
{
  CDropBagUI *v1; // edi
  void *v2; // ebx
  void *v3; // ebp
  int v4; // eax
  int v5; // esi
  int v6; // eax
  GameClient::RobotManager *v7; // eax
  struct GameClient::Robot *Robot; // edi
  struct CREControl *Control; // eax
  int v10; // eax
  int v11; // eax
  const char *v12; // eax
  const wchar_t *v13; // eax
  CREDialog *v14; // ecx
  int *v15; // eax
  struct CREControl *v16; // eax
  int v17; // edi
  int v18; // eax
  const char *v19; // eax
  const wchar_t *v20; // eax
  int *v21; // eax
  int v22; // esi
  unsigned int i; // edi
  int v24; // ecx
  int v25; // ebx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  void *v31; // ebp
  int v32; // [esp-14h] [ebp-A4h] BYREF
  int v33; // [esp-10h] [ebp-A0h]
  int v34; // [esp-Ch] [ebp-9Ch]
  int v35; // [esp-8h] [ebp-98h]
  int v36; // [esp-4h] [ebp-94h]
  int v37; // [esp+0h] [ebp-90h]
  void ***v38; // [esp+4h] [ebp-8Ch]
  struct tagRECT *p_rc; // [esp+8h] [ebp-88h]
  int *v40; // [esp+Ch] [ebp-84h]
  int **v41; // [esp+24h] [ebp-6Ch]
  float MaxEnergy; // [esp+28h] [ebp-68h]
  int *v43; // [esp+2Ch] [ebp-64h]
  int v44; // [esp+30h] [ebp-60h] BYREF
  int *v45; // [esp+34h] [ebp-5Ch]
  int v46; // [esp+38h] [ebp-58h] BYREF
  void *v47; // [esp+3Ch] [ebp-54h]
  int v48; // [esp+40h] [ebp-50h]
  struct tagRECT rc; // [esp+44h] [ebp-4Ch] BYREF
  struct tagRECT v50; // [esp+54h] [ebp-3Ch] BYREF
  _BYTE v51[4]; // [esp+64h] [ebp-2Ch] BYREF
  _DWORD v52[7]; // [esp+68h] [ebp-28h] BYREF
  int v53; // [esp+88h] [ebp-8h]
  int v54; // [esp+8Ch] [ebp-4h]

  v1 = this;
  v41 = (int **)this;
  sub_1000F056();
  v2 = (void *)*((_DWORD *)v1 + 1003);
  if ( *((_DWORD *)v1 + 1002) > (unsigned int)v2 )
    _invalid_parameter_noinfo();
  v3 = (void *)*((_DWORD *)v1 + 1002);
  if ( (unsigned int)v3 > *((_DWORD *)v1 + 1003) )
    _invalid_parameter_noinfo();
  sub_100141EB((int)&v44, (int)v1 + 4004, v3, (int)v1 + 4004, v2);
  sub_1001A546();
  v45 = (int *)*((_DWORD *)v1 + 1007);
  v44 = (int)v1 + 4024;
  sub_100052D6(9, (int)&v44);
  *((_DWORD *)v1 + 1013) = 1;
  *((_DWORD *)v1 + 1014) = 1;
  v4 = sub_10001DFC(*((_DWORD *)v1 + 1015));
  if ( v4 )
  {
    v40 = 0;
    v5 = _RTDynamicCast(
           v4,
           0,
           &GameClient::WorldObject `RTTI Type Descriptor',
           &GameClient::Booty `RTTI Type Descriptor');
    if ( v5 )
    {
      v6 = sub_1000194C(0);
      if ( v6 )
      {
        v40 = *(int **)(v6 + 292);
        v7 = GameClient::RobotManager::Instance();
        Robot = GameClient::RobotManager::GetRobot(v7, (int)v40);
        if ( Robot )
        {
          v40 = 0;
          Control = CREDialog::GetControl((CREDialog *)v41, 41);
          v41 = (int **)_RTDynamicCast(Control, v36, 0, &CREControl `RTTI Type Descriptor');
          SetRect(&rc, 0, 0, 95, 72);
          v10 = *((_DWORD *)Robot + 27);
          p_rc = &rc;
          v11 = sub_10011A3B(v51, v10);
          v53 = 0;
          v12 = (const char *)std::string::c_str(v11);
          v13 = atow(v12);
          v43 = &v32;
          std::wstring::wstring(&v32, v13);
          CPictureLabel::ChangeTexture(v41, v32, v33, v34, v35, v36, v37, v38, p_rc);
          v54 = -1;
          std::string::~string(v52);
          MaxEnergy = GameClient::Robot::GetMaxEnergy(Robot);
          v14 = (CREDialog *)v41;
          v15 = v41[1016];
          *((float *)v15 + 177) = MaxEnergy;
          v1 = v14;
          *((float *)v15 + 178) = 0.0;
        }
        else
        {
          v1 = (CDropBagUI *)v41;
        }
      }
      v40 = 0;
      p_rc = (struct tagRECT *)&CPictureLabel `RTTI Type Descriptor';
      v38 = &CREControl `RTTI Type Descriptor';
      v37 = 0;
      v16 = CREDialog::GetControl(v1, 42);
      v17 = _RTDynamicCast(v16, v36, v37, v38);
      SetRect(&v50, 0, 0, 95, 72);
      p_rc = &v50;
      v18 = sub_10011A3B(v51, *(_DWORD *)(v5 + 108));
      v53 = 1;
      v19 = (const char *)std::string::c_str(v18);
      v20 = atow(v19);
      v43 = &v32;
      std::wstring::wstring(&v32, v20);
      CPictureLabel::ChangeTexture(v17, v32, v33, v34, v35, v36, v37, v38, p_rc);
      v54 = -1;
      std::string::~string(v52);
      MaxEnergy = *(float *)(v5 + 164);
      v21 = v41[1017];
      *((float *)v21 + 177) = MaxEnergy;
      v22 = v5 + 148;
      *((float *)v21 + 178) = 0.0;
      for ( i = 0; i < sub_1000E52F(); ++i )
      {
        v24 = *(_DWORD *)(v22 + 4);
        if ( !v24 || i >= (*(_DWORD *)(v22 + 8) - v24) >> 3 )
          _invalid_parameter_noinfo();
        v25 = 8 * i;
        sub_10007059((int)&v44, 8 * i + *(_DWORD *)(v22 + 4));
        v43 = v41[1007];
        v26 = v44;
        if ( !v44 || (int **)v44 != v41 + 1006 )
        {
          _invalid_parameter_noinfo();
          v26 = v44;
        }
        if ( v45 == v43 )
        {
          v47 = 0;
          v48 = 0;
          rc.left = 0;
          v27 = *(_DWORD *)(v22 + 4);
          v54 = 2;
          if ( !v27 || i >= (*(_DWORD *)(v22 + 8) - v27) >> 3 )
            _invalid_parameter_noinfo();
          sub_1001A0F5(&v46, v25 + *(_DWORD *)(v22 + 4) + 4);
          v28 = *(_DWORD *)(v22 + 4);
          if ( !v28 || i >= (*(_DWORD *)(v22 + 8) - v28) >> 3 )
            _invalid_parameter_noinfo();
          v29 = v25 + *(_DWORD *)(v22 + 4);
          v40 = &v46;
          sub_1000FAFB(v29);
          sub_1000C252((int)v40);
          v54 = -1;
          if ( v47 )
            operator delete(v47);
          v47 = 0;
          v48 = 0;
          rc.left = 0;
        }
        else
        {
          if ( !v26 )
          {
            _invalid_parameter_noinfo();
            v26 = v44;
          }
          if ( v45 == *(int **)(v26 + 4) )
            _invalid_parameter_noinfo();
          v30 = *(_DWORD *)(v22 + 4);
          v31 = v45 + 3;
          if ( !v30 || i >= (*(_DWORD *)(v22 + 8) - v30) >> 3 )
            _invalid_parameter_noinfo();
          sub_1001A0F5(v31, v25 + *(_DWORD *)(v22 + 4) + 4);
        }
      }
      v1 = (CDropBagUI *)v41;
    }
  }
  CDropBagUI::ShowBag(v1);
}
