/*
 * func-name: ?RefreshSuiteStatus@CDropBagUI@@IAEXXZ_0
 * func-address: 0x10268f30
 * callers: 0x1000970a
 * callees: 0x10003b52, 0x1000554c, 0x1000aff6, 0x1000ef34, 0x10011766, 0x10011a4f, 0x10012c29, 0x1001789b, 0x10018a57, 0x102c9d50, 0x102c9d62, 0x102c9ea8, 0x102c9fe0
 */

void __thiscall CDropBagUI::RefreshSuiteStatus(CDropBagUI *this)
{
  int i; // ebx
  GameClient::FlyweightManager *v3; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // ecx
  int v12; // edx
  GameClient::FlyweightManager *v13; // eax
  struct GameClient::Flyweight *v14; // eax
  int v15; // eax
  void *v16; // edx
  char *v17; // edi
  unsigned int v18; // ebx
  int v19; // ecx
  int v20; // eax
  GameClient::FlyweightManager *v21; // eax
  struct GameClient::Flyweight *v22; // eax
  int v23; // eax
  void *v24; // edx
  char *v25; // edi
  int v26; // edi
  double v27; // st7
  struct CREControl *Control; // eax
  struct CREControl *v29; // eax
  struct CREControl *v30; // eax
  CREStatic *v31; // eax
  void (__stdcall *v32)(_DWORD, int); // edx
  struct CREControl *v33; // eax
  struct CREControl *v34; // eax
  int v35; // eax
  CREStatic *v36; // esi
  char v37[4]; // [esp+1Ch] [ebp-1A0h] BYREF
  int v38; // [esp+20h] [ebp-19Ch]
  int v39; // [esp+24h] [ebp-198h]
  int v40; // [esp+28h] [ebp-194h]
  wchar_t v41[4]; // [esp+2Ch] [ebp-190h]
  void ***v42; // [esp+34h] [ebp-188h]
  void ***v43; // [esp+38h] [ebp-184h]
  int v44; // [esp+3Ch] [ebp-180h]
  wchar_t Format[2]; // [esp+7Ch] [ebp-140h] BYREF
  float v46; // [esp+80h] [ebp-13Ch]
  float v47; // [esp+84h] [ebp-138h]
  int v48; // [esp+88h] [ebp-134h] BYREF
  void *v49; // [esp+8Ch] [ebp-130h]
  void *Source; // [esp+90h] [ebp-12Ch]
  int v51; // [esp+94h] [ebp-128h]
  int v52; // [esp+98h] [ebp-124h]
  int v53; // [esp+9Ch] [ebp-120h]
  float v54; // [esp+A0h] [ebp-11Ch]
  int v55; // [esp+A4h] [ebp-118h] BYREF
  wchar_t Buffer; // [esp+A8h] [ebp-114h] BYREF
  wchar_t v57; // [esp+ACh] [ebp-110h] BYREF
  wchar_t v58; // [esp+B0h] [ebp-10Ch] BYREF
  wchar_t v59[98]; // [esp+B4h] [ebp-108h] BYREF
  int v60; // [esp+1B8h] [ebp-4h]

  v47 = 0.0;
  v54 = 0.0;
  v52 = 0;
  *(float *)&v53 = 0.0;
  v49 = 0;
  v46 = 0.0;
  Source = 0;
  v51 = 0;
  v60 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( *((_DWORD *)this + i + 968) != -1 )
    {
      v42 = (void ***)*((_DWORD *)this + i + 968);
      v3 = GameClient::FlyweightManager::Instance();
      Flyweight = GameClient::FlyweightManager::GetFlyweight(v3, (unsigned int)v42);
      v42 = 0;
      v5 = _RTDynamicCast(
             Flyweight,
             0,
             &GameClient::Flyweight `RTTI Type Descriptor',
             &GameClient::FSystemPart `RTTI Type Descriptor');
      *(_DWORD *)Format = v5;
      if ( v5 )
        sub_10011766(&v48, (int)Format);
      if ( i )
      {
        if ( i == 1 )
        {
          v42 = 0;
          _RTDynamicCast(
            v5,
            0,
            &GameClient::FSystemPart `RTTI Type Descriptor',
            &GameClient::FRobotArmor `RTTI Type Descriptor');
        }
        else if ( i == 2 )
        {
          v42 = 0;
          v7 = _RTDynamicCast(
                 v5,
                 0,
                 &GameClient::FSystemPart `RTTI Type Descriptor',
                 &GameClient::FRobotCore `RTTI Type Descriptor');
          if ( v7 )
          {
            v52 = *(_DWORD *)(v7 + 272);
            *(float *)&v55 = COERCE_FLOAT(v37);
            std::string::string(v37, (void *)(v7 + 292));
            LOBYTE(v60) = 1;
            GameClient::FlyweightManager::Instance();
            LOBYTE(v60) = 0;
            v8 = GameClient::FlyweightManager::GetFlyweight(
                   v37[0],
                   v38,
                   v39,
                   v40,
                   *(int *)v41,
                   *(int *)&v41[2],
                   (int)v42);
            v42 = 0;
            v9 = _RTDynamicCast(
                   v8,
                   0,
                   &GameClient::Flyweight `RTTI Type Descriptor',
                   &GameClient::FFunc_Power `RTTI Type Descriptor');
            if ( v9 )
            {
              v54 = *(float *)(v9 + 108);
              v53 = *(int *)(v9 + 112);
            }
          }
        }
      }
      else
      {
        v42 = 0;
        v6 = _RTDynamicCast(
               v5,
               0,
               &GameClient::FSystemPart `RTTI Type Descriptor',
               &GameClient::FRobotBody `RTTI Type Descriptor');
        if ( v6 )
        {
          v47 = (float)*(int *)(v6 + 200);
          v46 = (float)*(int *)(v6 + 332);
        }
      }
    }
  }
  v10 = 0;
  while ( 1 )
  {
    v11 = *((_DWORD *)this + 972);
    if ( !v11 || v10 >= (*((_DWORD *)this + 973) - v11) >> 2 )
      break;
    v12 = *((_DWORD *)this + 972);
    if ( *(_DWORD *)(4 * v10 + v12) == -1 )
      goto LABEL_30;
    if ( !v12 || v10 >= (*((_DWORD *)this + 973) - v12) >> 2 )
      _invalid_parameter_noinfo();
    v42 = *(void ****)(4 * v10 + *((_DWORD *)this + 972));
    v13 = GameClient::FlyweightManager::Instance();
    v14 = GameClient::FlyweightManager::GetFlyweight(v13, (unsigned int)v42);
    v42 = 0;
    v15 = _RTDynamicCast(
            v14,
            0,
            &GameClient::Flyweight `RTTI Type Descriptor',
            &GameClient::FSystemPart `RTTI Type Descriptor');
    *(_DWORD *)Format = v15;
    if ( !v15 )
    {
LABEL_30:
      ++v10;
    }
    else
    {
      v16 = v49;
      v17 = (char *)Source;
      if ( !v49 )
        goto LABEL_27;
      if ( ((_BYTE *)Source - (_BYTE *)v49) >> 2 >= (unsigned int)((v51 - (int)v49) >> 2) )
      {
        v16 = v49;
LABEL_27:
        if ( v16 > Source )
          _invalid_parameter_noinfo();
        sub_1000554C((int)&v55, (int)&v48, v17, (int)Format);
        goto LABEL_30;
      }
      *(_DWORD *)Source = v15;
      Source = v17 + 4;
      ++v10;
    }
  }
  v18 = 0;
  while ( 1 )
  {
    v19 = *((_DWORD *)this + 980);
    if ( !v19 || v18 >= (*((_DWORD *)this + 981) - v19) >> 2 )
      break;
    v20 = *((_DWORD *)this + 980);
    if ( *(_DWORD *)(4 * v18 + v20) == -1 )
      goto LABEL_46;
    if ( !v20 || v18 >= (*((_DWORD *)this + 981) - v20) >> 2 )
      _invalid_parameter_noinfo();
    v42 = *(void ****)(*((_DWORD *)this + 980) + 4 * v18);
    v21 = GameClient::FlyweightManager::Instance();
    v22 = GameClient::FlyweightManager::GetFlyweight(v21, (unsigned int)v42);
    v42 = 0;
    v23 = _RTDynamicCast(
            v22,
            0,
            &GameClient::Flyweight `RTTI Type Descriptor',
            &GameClient::FSystemPart `RTTI Type Descriptor');
    *(_DWORD *)Format = v23;
    if ( !v23 )
      goto LABEL_46;
    v24 = v49;
    v25 = (char *)Source;
    if ( !v49 )
      goto LABEL_43;
    if ( ((_BYTE *)Source - (_BYTE *)v49) >> 2 >= (unsigned int)((v51 - (int)v49) >> 2) )
    {
      v24 = v49;
LABEL_43:
      if ( v24 > Source )
        _invalid_parameter_noinfo();
      sub_1000554C((int)&v55, (int)&v48, v25, (int)Format);
LABEL_46:
      ++v18;
      continue;
    }
    *(_DWORD *)Source = v23;
    Source = v25 + 4;
    ++v18;
  }
  v26 = GameClient::Robot::ComputerTotalMass((int)&v48);
  *(_DWORD *)Format = GameClient::Robot::ComputerTotalPower((int)&v48);
  v27 = GameClient::Robot::ComputerBasicSpeed((int)v46, (int)v47, v26);
  v42 = 0;
  *(float *)&v55 = v27 * 3.599999904632568;
  *(_DWORD *)&v41[2] = &CREStatic `RTTI Type Descriptor';
  *(_DWORD *)v41 = &CREControl `RTTI Type Descriptor';
  v40 = 0;
  Control = CREDialog::GetControl(this, 31);
  *(_DWORD *)Format = _RTDynamicCast(Control, v39, v40, *(_DWORD *)v41);
  sub_10011A4F(&Buffer, (size_t)L"%d", v26);
  CREStatic::SetText(*(CREStatic **)Format, &Buffer);
  v44 = 0;
  v43 = &CREStatic `RTTI Type Descriptor';
  v42 = &CREControl `RTTI Type Descriptor';
  *(_DWORD *)&v41[2] = 0;
  v29 = CREDialog::GetControl(this, 34);
  v48 = _RTDynamicCast(v29, *(_DWORD *)v41, *(_DWORD *)&v41[2], v42);
  sub_10011A4F(v59, (size_t)L"%d", (int)*(float *)&v55);
  CREStatic::SetText((CREStatic *)v48, v59);
  v43 = 0;
  v42 = &CREStatic `RTTI Type Descriptor';
  *(_DWORD *)&v41[2] = &CREControl `RTTI Type Descriptor';
  *(_DWORD *)v41 = 0;
  v30 = CREDialog::GetControl(this, 35);
  v31 = (CREStatic *)_RTDynamicCast(v30, v40, *(_DWORD *)v41, *(_DWORD *)&v41[2]);
  v38 = v52;
  v47 = *(float *)&v31;
  sub_10011A4F(&v57, (size_t)L"%d / %d", Format[0]);
  CREStatic::SetText((CREStatic *)LODWORD(v47), &v57);
  v32 = *(void (__stdcall **)(_DWORD, int))(*(_DWORD *)v48 + 180);
  v43 = 0;
  if ( SLODWORD(v46) <= v53 )
  {
    v32(0, -1);
  }
  else
  {
    v32(0, -65536);
    CREStatic::SetText(*((CREStatic **)this + 991), word_10321810);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 991) + 136))(*((_DWORD *)this + 991), 1);
  }
  v42 = 0;
  *(_DWORD *)&v41[2] = &CREStatic `RTTI Type Descriptor';
  *(_DWORD *)v41 = &CREControl `RTTI Type Descriptor';
  v40 = 0;
  v33 = CREDialog::GetControl(this, 33);
  v46 = COERCE_FLOAT(_RTDynamicCast(v33, v40, *(_DWORD *)v41, *(_DWORD *)&v41[2]));
  sub_10011A4F(&v58, (size_t)L"%d", (int)*(float *)&v55);
  CREStatic::SetText((CREStatic *)LODWORD(v46), &v58);
  v42 = 0;
  *(_DWORD *)&v41[2] = &CREStatic `RTTI Type Descriptor';
  *(_DWORD *)v41 = &CREControl `RTTI Type Descriptor';
  v40 = 0;
  v34 = CREDialog::GetControl(this, 32);
  v35 = _RTDynamicCast(v34, v39, v40, *(_DWORD *)v41);
  *(double *)v41 = v54;
  v36 = (CREStatic *)v35;
  sub_10011A4F(&Buffer, (size_t)L"%.1f", v41[0]);
  CREStatic::SetText(v36, &Buffer);
  if ( v49 )
    operator delete(v49);
}
