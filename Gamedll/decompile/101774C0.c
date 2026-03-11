/*
 * func-name: ?Asphyxia@Robot@GameClient@@QAEXMM@Z_0
 * func-address: 0x101774c0
 * callers: 0x10012378
 * callees: 0x100029cd, 0x10006947, 0x10006a19, 0x1000a506, 0x1000a8f3, 0x1000ad76, 0x1000f1dc, 0x10014178, 0x10016a4f, 0x10016f95, 0x1001816a, 0x10018e71, 0x102c0750, 0x102c0ed0, 0x102c0f00
 */

void __thiscall GameClient::Robot::Asphyxia(GameClient::Robot *this, float a2, float a3)
{
  double v4; // st7
  bool v5; // zf
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  double v11; // st7
  int v12; // eax
  double v13; // st7
  int v14; // eax
  float *v15; // eax
  double v16; // st7
  int v17; // eax
  int v18; // eax
  Event *v19; // eax
  int v20; // ebp
  struct BinStream *Stream; // edi
  GameClient::FuncManager *v22; // eax
  struct GameClient::Function *Function; // edi
  int v24; // eax
  int v25; // ecx
  CDlgMgr *v26; // eax
  CTYDialog *Dialog; // eax
  CDlgMgr *v28; // eax
  unsigned int v29; // [esp+40h] [ebp-BCh]
  float v30; // [esp+58h] [ebp-A4h]
  float v31; // [esp+58h] [ebp-A4h]
  float v32; // [esp+58h] [ebp-A4h]
  float v33; // [esp+58h] [ebp-A4h]
  float v34; // [esp+58h] [ebp-A4h]
  float v35; // [esp+58h] [ebp-A4h]
  float v36; // [esp+5Ch] [ebp-A0h]
  float v37; // [esp+5Ch] [ebp-A0h]
  float v38; // [esp+5Ch] [ebp-A0h]
  float v39; // [esp+5Ch] [ebp-A0h]
  float v40; // [esp+5Ch] [ebp-A0h]
  float v41; // [esp+60h] [ebp-9Ch]
  float v42; // [esp+60h] [ebp-9Ch]
  float v43; // [esp+60h] [ebp-9Ch]
  float v44; // [esp+60h] [ebp-9Ch]
  float v45; // [esp+60h] [ebp-9Ch]
  int v46; // [esp+64h] [ebp-98h] BYREF
  float v47; // [esp+68h] [ebp-94h]
  float v48; // [esp+6Ch] [ebp-90h]
  float v49; // [esp+70h] [ebp-8Ch] BYREF
  float v50; // [esp+74h] [ebp-88h]
  float v51; // [esp+78h] [ebp-84h]
  _BYTE v52[16]; // [esp+7Ch] [ebp-80h] BYREF
  float v53; // [esp+8Ch] [ebp-70h]
  float v54; // [esp+90h] [ebp-6Ch]
  float v55; // [esp+94h] [ebp-68h]
  float v56; // [esp+98h] [ebp-64h]
  float v57; // [esp+9Ch] [ebp-60h]
  float v58; // [esp+A0h] [ebp-5Ch]
  _BYTE v59[12]; // [esp+A4h] [ebp-58h] BYREF
  _BYTE v60[48]; // [esp+B0h] [ebp-4Ch] BYREF
  float v61; // [esp+E0h] [ebp-1Ch]
  float v62; // [esp+E4h] [ebp-18h]
  float v63; // [esp+E8h] [ebp-14h]
  int v64; // [esp+F8h] [ebp-4h]

  *((float *)this + 100) = a2;
  *((_DWORD *)this + 165) = 1;
  *((float *)this + 101) = a3;
  *((float *)this + 167) = 100.0;
  v4 = 0.0;
  *((float *)this + 170) = 0.0;
  *((float *)this + 169) = 0.0;
  *((float *)this + 168) = 0.0;
  v5 = *((_DWORD *)this + 93) == 0;
  *((_DWORD *)this + 88) = 2;
  *((_DWORD *)this + 90) = 1;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 92) = 0;
  if ( !v5 )
    *((_DWORD *)this + 92) = 8;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 186) = 0;
  *((float *)this + 190) = 0.0;
  *((float *)this + 189) = 0.0;
  *((float *)this + 188) = 0.0;
  v6 = *((_DWORD *)this + 39);
  if ( !v6 || !((*((_DWORD *)this + 40) - v6) / 20) )
  {
    _invalid_parameter_noinfo();
    v4 = 0.0;
  }
  *(float *)(*((_DWORD *)this + 39) + 8) = v4;
  v7 = *((_DWORD *)this + 48);
  if ( v7 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 24))(v7, 0);
  v8 = *((_DWORD *)this + 55);
  if ( v8 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 48))(v8);
  v9 = *((_DWORD *)this + 56);
  if ( v9 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 48))(v9);
  v10 = *((_DWORD *)this + 36);
  if ( v10 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 48))(v10);
  GameClient::WorldObject::ClearAura(this);
  GameClient::Robot::UpdatePhysicsController(this);
  if ( !*((_DWORD *)this + 45) && GameClient::RobotBody::GetRobotType() == 1 )
  {
    sub_1000F1DC();
    v56 = *((float *)this + 111);
    v11 = *((float *)this + 112);
    v64 = 0;
    v57 = v11 * 0.2000000029802322;
    v58 = *((float *)this + 112);
    v53 = *((float *)this + 108);
    v54 = 0.2000000029802322 * *((float *)this + 109);
    v55 = *((float *)this + 109);
    sub_102C0ED0(&v46);
    v12 = *((_DWORD *)this + 89);
    switch ( v12 )
    {
      case 2:
        v41 = -*(float *)&v46;
        v36 = -v47;
        v30 = -v48;
        v49 = v41;
        v50 = v36;
        v13 = v30;
LABEL_22:
        v51 = v13;
        v48 = v51;
        v47 = v50;
        *(float *)&v46 = v49;
        break;
      case 4:
        v14 = sub_102C0F00(&v49);
        v46 = *(int *)v14;
        v47 = *(float *)(v14 + 4);
        v48 = *(float *)(v14 + 8);
        break;
      case 3:
        v15 = (float *)sub_102C0F00(v59);
        v31 = -*v15;
        v37 = -v15[1];
        v42 = -v15[2];
        v49 = v31;
        v50 = v37;
        v13 = v42;
        goto LABEL_22;
    }
    v47 = 0.0;
    sub_100029CD();
    sub_10018E71(v60, (int)&v46);
    v32 = *((float *)this + 111) - *((float *)this + 108);
    v16 = v32;
    v33 = v32 * *(float *)&v46;
    v38 = v16 * v47;
    v43 = v16 * v48;
    v34 = v33 * 0.5;
    v39 = v38 * 0.5;
    v44 = 0.5 * v43;
    v35 = *((float *)this + 6) + v34;
    v40 = *((float *)this + 7) + v39;
    v45 = *((float *)this + 8) + v44;
    v49 = v35;
    v50 = v40;
    v61 = v35;
    v51 = v45;
    v62 = v40;
    v63 = v45;
    v17 = NxPhysics::Instance(*((_DWORD *)this + 43), *((_DWORD *)this + 3), v52, v60, 0);
    *((_DWORD *)this + 45) = NxPhysics::CreateBoxActor(v17);
    v64 = -1;
    sub_102C0750(v52);
  }
  if ( *((_BYTE *)this + 700) )
    GameClient::Robot::ChangeViewMode(this, 0);
  if ( GameClient::WorldObject::IsLocal(this) )
  {
    v18 = EventAttemper::Instance(9, 4106);
    v19 = (Event *)EventAttemper::AddEvent(v18);
    v20 = *((_DWORD *)this + 3);
    Stream = Event::GetStream(v19);
    sub_1001816A(4);
    *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = v20;
    *((_DWORD *)Stream + 2) += 4;
    if ( *((_DWORD *)this + 227) != -1 )
    {
      v29 = *((_DWORD *)this + 227);
      v22 = GameClient::FuncManager::Instance();
      Function = GameClient::FuncManager::GetFunction(v22, v29);
      if ( Function )
      {
        v24 = sub_10016A4F(*((_DWORD *)this + 227));
        if ( v24 )
          (*(void (__thiscall **)(struct GameClient::Function *, int))(*(_DWORD *)Function + 44))(Function, v24);
      }
    }
  }
  v25 = *((_DWORD *)this + 57);
  if ( v25 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v25 + 156))(v25);
  if ( GameClient::WorldObject::IsLocal(this) )
  {
    v26 = (CDlgMgr *)CDlgMgr::Instance(24);
    Dialog = CDlgMgr::GetDialog(v26);
    if ( !(unsigned __int8)CTYDialog::GetVisible(Dialog) )
    {
      v28 = (CDlgMgr *)CDlgMgr::Instance(24);
      CDlgMgr::ShowDialog(v28);
    }
  }
}
