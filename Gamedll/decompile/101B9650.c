/*
 * func-name: ?BindWheelFrames@SuspendVehicle@GameClient@@QAEXXZ_0
 * func-address: 0x101b9650
 * callers: 0x10004ef3
 * callees: 0x10004dea, 0x100072bb, 0x10009fd9, 0x1000c789, 0x1000fe5c, 0x10015078
 */

void __thiscall GameClient::SuspendVehicle::BindWheelFrames(GameClient::SuspendVehicle *this)
{
  _DWORD *v2; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edi
  unsigned int i; // edi
  int v12; // ecx
  int v13; // edx
  void *v14; // eax
  void *NodeHandle; // eax
  void *v16; // eax
  void *v17; // eax
  unsigned int j; // edi
  int v19; // ecx
  int v20; // ecx
  int v21; // [esp+14h] [ebp-6Ch] BYREF
  int v22; // [esp+18h] [ebp-68h]
  int v23; // [esp+1Ch] [ebp-64h]
  int v24; // [esp+20h] [ebp-60h]
  int v25; // [esp+24h] [ebp-5Ch]
  int v26; // [esp+28h] [ebp-58h]
  int v27; // [esp+2Ch] [ebp-54h]
  int v28; // [esp+30h] [ebp-50h]
  struct ModelFrame *Frame; // [esp+48h] [ebp-38h] BYREF
  struct ModelFrame *v30; // [esp+4Ch] [ebp-34h] BYREF
  int *v31; // [esp+50h] [ebp-30h]
  _BYTE v32[4]; // [esp+54h] [ebp-2Ch] BYREF
  int v33; // [esp+58h] [ebp-28h]
  int v34; // [esp+5Ch] [ebp-24h]
  _BYTE v35[4]; // [esp+64h] [ebp-1Ch] BYREF
  int v36; // [esp+68h] [ebp-18h]
  int v37; // [esp+6Ch] [ebp-14h]
  int v38; // [esp+7Ch] [ebp-4h]

  if ( GameClient::ControlledEstab::GetNormalModel(this) && *((_DWORD *)this + 114) )
  {
    v2 = (_DWORD *)*((_DWORD *)this + 135);
    v3 = v2[290];
    if ( v3 )
      v4 = (v2[291] - v3) >> 2;
    else
      v4 = 0;
    v5 = v2[298];
    if ( v5 )
      v5 = (v2[299] - v5) / 28;
    if ( v4 == v5 )
    {
      v6 = v2[290];
      if ( v6 )
        v7 = (v2[291] - v6) >> 2;
      else
        v7 = 0;
      v8 = v2[294];
      if ( v8 )
        v8 = (v2[295] - v8) / 28;
      if ( v7 == v8 )
      {
        v9 = v2[290];
        v10 = v9 ? (v2[291] - v9) >> 2 : 0;
        if ( v10 == sub_10015078() )
        {
          std::vector<ModelFrame *>::vector<ModelFrame *>(v35);
          v38 = 0;
          std::vector<ModelFrame *>::vector<ModelFrame *>(v32);
          LOBYTE(v38) = 1;
          for ( i = 0; ; ++i )
          {
            v12 = *((_DWORD *)this + 135);
            v13 = *(_DWORD *)(v12 + 1160);
            if ( !v13 || i >= (*(_DWORD *)(v12 + 1164) - v13) >> 2 )
              break;
            v28 = 0;
            v14 = (void *)sub_1000C789(i);
            v31 = &v21;
            std::string::string(&v21, v14);
            NodeHandle = (void *)StaticModel::GetNodeHandle(
                                   *(_DWORD *)(*((_DWORD *)this + 75) + 716),
                                   v21,
                                   v22,
                                   v23,
                                   v24,
                                   v25,
                                   v26,
                                   v27,
                                   v28);
            Frame = StaticModel::GetFrame(*(StaticModel **)(*((_DWORD *)this + 75) + 716), NodeHandle);
            if ( !Frame )
              goto LABEL_33;
            v28 = 0;
            v16 = (void *)sub_1000C789(i);
            v31 = &v21;
            std::string::string(&v21, v16);
            v17 = (void *)StaticModel::GetNodeHandle(
                            *(_DWORD *)(*((_DWORD *)this + 75) + 716),
                            v21,
                            v22,
                            v23,
                            v24,
                            v25,
                            v26,
                            v27,
                            v28);
            v30 = StaticModel::GetFrame(*(StaticModel **)(*((_DWORD *)this + 75) + 716), v17);
            if ( !v30 )
              goto LABEL_33;
            std::vector<ModelFrame *>::push_back(v35, &Frame);
            std::vector<ModelFrame *>::push_back(v32, &v30);
          }
          for ( j = 0; (int)j < sub_10015078(); ++j )
          {
            v19 = v36;
            if ( !v36 || j >= (v37 - v36) >> 2 )
            {
              _invalid_parameter_noinfo();
              v19 = v36;
            }
            v28 = *(_DWORD *)(v19 + 4 * j);
            sub_1000FE5C(j);
            sub_10009FD9(v28);
            v20 = v33;
            if ( !v33 || j >= (v34 - v33) >> 2 )
            {
              _invalid_parameter_noinfo();
              v20 = v33;
            }
            v28 = *(_DWORD *)(v20 + 4 * j);
            sub_1000FE5C(j);
            sub_100072BB(v28);
          }
LABEL_33:
          LOBYTE(v38) = 0;
          std::vector<ModelFrame *>::~vector<ModelFrame *>(v32);
          v38 = -1;
          std::vector<ModelFrame *>::~vector<ModelFrame *>(v35);
        }
      }
    }
  }
}
