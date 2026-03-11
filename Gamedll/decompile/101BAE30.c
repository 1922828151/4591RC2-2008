/*
 * func-name: ?BindWheelFrames@WheelVehicle@GameClient@@QAEXXZ_0
 * func-address: 0x101bae30
 * callers: 0x10006b86
 * callees: 0x10004dea, 0x100065ff, 0x100072bb, 0x10009fd9, 0x1000c789, 0x1000fe5c, 0x10015078
 */

void __thiscall GameClient::WheelVehicle::BindWheelFrames(GameClient::WheelVehicle *this)
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
  unsigned int v21; // edi
  int k; // ebp
  int v23; // eax
  int v24; // eax
  int v25; // [esp+14h] [ebp-6Ch] BYREF
  int v26; // [esp+18h] [ebp-68h]
  int v27; // [esp+1Ch] [ebp-64h]
  int v28; // [esp+20h] [ebp-60h]
  int v29; // [esp+24h] [ebp-5Ch]
  int v30; // [esp+28h] [ebp-58h]
  int v31; // [esp+2Ch] [ebp-54h]
  int v32; // [esp+30h] [ebp-50h]
  struct ModelFrame *Frame; // [esp+48h] [ebp-38h] BYREF
  struct ModelFrame *v34; // [esp+4Ch] [ebp-34h] BYREF
  int *v35; // [esp+50h] [ebp-30h]
  _BYTE v36[4]; // [esp+54h] [ebp-2Ch] BYREF
  int v37; // [esp+58h] [ebp-28h]
  int v38; // [esp+5Ch] [ebp-24h]
  _BYTE v39[4]; // [esp+64h] [ebp-1Ch] BYREF
  int v40; // [esp+68h] [ebp-18h]
  int v41; // [esp+6Ch] [ebp-14h]
  int v42; // [esp+7Ch] [ebp-4h]

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
          std::vector<ModelFrame *>::vector<ModelFrame *>(v39);
          v42 = 0;
          std::vector<ModelFrame *>::vector<ModelFrame *>(v36);
          LOBYTE(v42) = 1;
          for ( i = 0; ; ++i )
          {
            v12 = *((_DWORD *)this + 135);
            v13 = *(_DWORD *)(v12 + 1160);
            if ( !v13 || i >= (*(_DWORD *)(v12 + 1164) - v13) >> 2 )
              break;
            v32 = 0;
            v14 = (void *)sub_1000C789(i);
            v35 = &v25;
            std::string::string(&v25, v14);
            NodeHandle = (void *)StaticModel::GetNodeHandle(
                                   *(_DWORD *)(*((_DWORD *)this + 75) + 716),
                                   v25,
                                   v26,
                                   v27,
                                   v28,
                                   v29,
                                   v30,
                                   v31,
                                   v32);
            Frame = StaticModel::GetFrame(*(StaticModel **)(*((_DWORD *)this + 75) + 716), NodeHandle);
            if ( !Frame )
              goto LABEL_40;
            v32 = 0;
            v16 = (void *)sub_1000C789(i);
            v35 = &v25;
            std::string::string(&v25, v16);
            v17 = (void *)StaticModel::GetNodeHandle(
                            *(_DWORD *)(*((_DWORD *)this + 75) + 716),
                            v25,
                            v26,
                            v27,
                            v28,
                            v29,
                            v30,
                            v31,
                            v32);
            v34 = StaticModel::GetFrame(*(StaticModel **)(*((_DWORD *)this + 75) + 716), v17);
            if ( !v34 )
              goto LABEL_40;
            std::vector<ModelFrame *>::push_back(v39, &Frame);
            std::vector<ModelFrame *>::push_back(v36, &v34);
          }
          for ( j = 0; (int)j < sub_10015078(); ++j )
          {
            v19 = v40;
            if ( !v40 || j >= (v41 - v40) >> 2 )
            {
              _invalid_parameter_noinfo();
              v19 = v40;
            }
            v32 = *(_DWORD *)(v19 + 4 * j);
            sub_1000FE5C(j);
            sub_10009FD9(v32);
            v20 = v37;
            if ( !v37 || j >= (v38 - v37) >> 2 )
            {
              _invalid_parameter_noinfo();
              v20 = v37;
            }
            v32 = *(_DWORD *)(v20 + 4 * j);
            sub_1000FE5C(j);
            sub_100072BB(v32);
          }
          v21 = 0;
          for ( k = 0; ; k += 120 )
          {
            v23 = *((_DWORD *)this + 140);
            if ( !v23 || v21 >= (*((_DWORD *)this + 141) - v23) / 120 )
              break;
            v24 = *((_DWORD *)this + 140);
            if ( !v24 || v21 >= (*((_DWORD *)this + 141) - v24) / 120 )
              _invalid_parameter_noinfo();
            v32 = k + *((_DWORD *)this + 140);
            sub_1000FE5C(v21);
            sub_100065FF(v32);
            ++v21;
          }
LABEL_40:
          LOBYTE(v42) = 0;
          std::vector<ModelFrame *>::~vector<ModelFrame *>(v36);
          v42 = -1;
          std::vector<ModelFrame *>::~vector<ModelFrame *>(v39);
        }
      }
    }
  }
}
