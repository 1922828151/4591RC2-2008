/*
 * func-name: sub_10120300
 * func-address: 0x10120300
 * callers: 0x1000aa4c
 * callees: 0x1000a097, 0x1000aa9c, 0x1000adc6, 0x1000cabd, 0x1000dafd, 0x100149ca, 0x10018e71, 0x102c0ed0, 0x102c23d0
 */

void __thiscall sub_10120300(int this)
{
  Editor *v2; // eax
  const char *v3; // eax
  NxPhysics *v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  GameClient::EstabManager *v11; // eax
  GameClient::ControlledEstab *Establishment; // esi
  CameraHandler *v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // [esp+10h] [ebp-ACh]
  struct Matrix *v20; // [esp+10h] [ebp-ACh]
  unsigned int v21; // [esp+18h] [ebp-A4h]
  int v22; // [esp+1Ch] [ebp-A0h]
  int v23; // [esp+1Ch] [ebp-A0h]
  struct NxActor **v24; // [esp+1Ch] [ebp-A0h]
  int v25; // [esp+20h] [ebp-9Ch]
  int v26; // [esp+20h] [ebp-9Ch]
  int v27; // [esp+24h] [ebp-98h]
  int v28; // [esp+28h] [ebp-94h]
  float v29; // [esp+2Ch] [ebp-90h]
  _DWORD v30[16]; // [esp+30h] [ebp-8Ch] BYREF
  _BYTE v31[12]; // [esp+70h] [ebp-4Ch] BYREF
  _BYTE v32[64]; // [esp+7Ch] [ebp-40h] BYREF

  v2 = (Editor *)Editor::Instance(v22, v25);
  if ( Editor::GetEditorMode(v2) )
  {
    if ( (unsigned __int8)std::operator!=<char>(this + 1252, this + 1052) )
    {
      std::string::operator=(this + 1252, this + 1052);
      v3 = (const char *)std::string::c_str(this + 1052);
      StaticModel::Load(*(StaticModel **)(this + 716), v3, 0);
      if ( *(_DWORD *)(this + 620) )
      {
        v4 = (NxPhysics *)NxPhysics::Instance(this + 620, v23, v26, v27, v28);
        NxPhysics::DestroyMeshActor(v4, v24);
      }
      v5 = *(_DWORD *)(this + 856);
      v6 = *(_DWORD *)(this + 864);
      qmemcpy(v30, (const void *)(this + 868), sizeof(v30));
      v7 = *(_DWORD *)(this + 860);
      v30[12] = v5;
      v30[13] = v7;
      v19 = *(_DWORD *)(this + 716);
      v30[14] = v6;
      v8 = NxPhysics::Instance(this, -1, v19, v30, 1);
      *(_DWORD *)(this + 620) = NxPhysics::CreateMeshActor(v8);
    }
    v9 = *(_DWORD **)(this + 1492);
    *(_DWORD *)(this + 1228) = v9[214];
    *(_DWORD *)(this + 1232) = v9[215];
    *(_DWORD *)(this + 1236) = v9[216];
    v10 = (_DWORD *)sub_102C0ED0(v31);
    *(_DWORD *)(this + 1240) = *v10;
    *(_DWORD *)(this + 1244) = v10[1];
    *(_DWORD *)(this + 1248) = v10[2];
  }
  else
  {
    switch ( *(_DWORD *)(this + 1476) )
    {
      case 1:
        if ( !Model::IsPlaying(*(Model **)(this + 716), *(_DWORD *)(this + 1288)) )
        {
          v18 = *(_DWORD *)(this + 1284);
          *(_DWORD *)(this + 1476) = 0;
          Model::TransitionToAnimation(*(Model **)(this + 716), v18, 0.0, -1.0, 0.0, 1.0);
        }
        break;
      case 2:
        v29 = *(float *)(this + 1484) + GDeltaTime;
        *(float *)(this + 1484) = v29;
        if ( *(float *)(this + 1224) <= (double)v29 )
        {
          v17 = *(_DWORD *)(this + 1288);
          *(float *)(this + 1484) = 0.0;
          *(_DWORD *)(this + 1476) = 1;
          Model::TransitionToAnimation(*(Model **)(this + 716), v17, 0.0, -1.0, 0.0, 1.0);
        }
        break;
      case 3:
        v21 = *(_DWORD *)(this + 1480);
        v11 = GameClient::EstabManager::Instance();
        Establishment = GameClient::EstabManager::GetEstablishment(v11, v21);
        if ( Establishment )
        {
          if ( *(_DWORD *)(this + 1496) != -1 )
          {
            v20 = (struct Matrix *)sub_10018E71(v30, this + 1240);
            v13 = CameraHandler::Instance();
            CameraHandler::setToView(v13, (struct Vector *)(this + 1228), v20, 0.0, 90.0);
          }
          GameClient::ControlledEstab::SetControlEnable(Establishment, 0);
          GameClient::ControlledEstab::SetCameraEnable(Establishment, 0);
          (*(void (__thiscall **)(GameClient::ControlledEstab *, int))(*(_DWORD *)Establishment + 36))(
            Establishment,
            *(_DWORD *)(this + 1280) + 212);
          v14 = *(_DWORD *)Establishment;
          v15 = sub_102C23D0(v32);
          (*(void (__thiscall **)(GameClient::ControlledEstab *, int))(v14 + 40))(Establishment, v15);
          if ( !Model::IsPlaying(*(Model **)(this + 716), *(_DWORD *)(this + 1296)) )
          {
            GameClient::ControlledEstab::SetControlEnable(Establishment, 1);
            GameClient::ControlledEstab::SetCameraEnable(Establishment, 1);
            v16 = *(_DWORD *)(this + 1292);
            *(_DWORD *)(this + 1480) = -1;
            *(_DWORD *)(this + 1476) = 2;
            Model::TransitionToAnimation(*(Model **)(this + 716), v16, 0.0, -1.0, 0.0, 1.0);
            *(_DWORD *)(this + 1496) = -1;
          }
        }
        break;
    }
  }
  Actor::Tick((Actor *)this);
}
