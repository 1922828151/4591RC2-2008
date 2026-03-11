/*
 * func-name: sub_101BB320
 * func-address: 0x101bb320
 * callers: 0x10011fcc
 * callees: 0x10007455, 0x1000adc6, 0x1000dafd, 0x10014669
 */

void __stdcall sub_101BB320(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  GameClient::WheelVehicle *v4; // ecx
  GameClient::EstabManager *v5; // eax
  struct BinStream *v6; // eax
  int v7; // ecx
  unsigned int v8; // esi
  int v9; // ecx
  unsigned int v10; // ebp
  int v11; // ecx
  struct BinStream *v12; // eax
  int v13; // edx
  float *v14; // ecx
  int v15; // ecx
  int v16; // edx
  float *v17; // ecx
  int v18; // edx
  float *v19; // ecx
  int v20; // edx
  float *v21; // ecx
  unsigned int v22; // [esp-4h] [ebp-88h]
  char v23; // [esp+8h] [ebp-7Ch]
  unsigned int v24; // [esp+Ch] [ebp-78h]
  GameClient::WheelVehicle *v25; // [esp+10h] [ebp-74h]
  struct GameClient::Establishment *Establishment; // [esp+10h] [ebp-74h]
  float v27; // [esp+14h] [ebp-70h] BYREF
  float v28; // [esp+18h] [ebp-6Ch]
  float v29; // [esp+1Ch] [ebp-68h]
  float v30; // [esp+20h] [ebp-64h] BYREF
  float v31; // [esp+24h] [ebp-60h]
  float v32; // [esp+28h] [ebp-5Ch]
  float v33; // [esp+2Ch] [ebp-58h] BYREF
  float v34; // [esp+30h] [ebp-54h]
  float v35; // [esp+34h] [ebp-50h]
  float v36; // [esp+38h] [ebp-4Ch] BYREF
  float v37; // [esp+3Ch] [ebp-48h]
  float v38; // [esp+40h] [ebp-44h]
  _BYTE v39[64]; // [esp+44h] [ebp-40h] BYREF

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = v25;
  }
  else
  {
    v4 = *(GameClient::WheelVehicle **)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3;
  }
  v22 = (unsigned int)v4;
  v5 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v5, v22);
  if ( Establishment )
  {
    v6 = Event::GetStream(a1);
    v7 = *((_DWORD *)v6 + 3);
    v8 = *((_DWORD *)v6 + 2);
    if ( v7 + 4 <= v8 )
    {
      v24 = *(_DWORD *)(v7 + *((_DWORD *)v6 + 1));
      *((_DWORD *)v6 + 3) = v7 + 4;
    }
    v9 = *((_DWORD *)v6 + 3);
    if ( v9 + 4 > v8 )
    {
      v10 = (unsigned int)Establishment;
    }
    else
    {
      v10 = *(_DWORD *)(v9 + *((_DWORD *)v6 + 1));
      *((_DWORD *)v6 + 3) = v9 + 4;
    }
    v11 = *((_DWORD *)v6 + 3);
    if ( v11 + 1 <= v8 )
    {
      v23 = *(_BYTE *)(v11 + *((_DWORD *)v6 + 1));
      *((_DWORD *)v6 + 3) = v11 + 1;
    }
    v36 = 0.0;
    v37 = 0.0;
    v38 = 0.0;
    v33 = 0.0;
    v34 = 0.0;
    v35 = 0.0;
    v30 = 0.0;
    v31 = 0.0;
    v32 = 0.0;
    v27 = 0.0;
    v28 = 0.0;
    v29 = 0.0;
    sub_10014669(v39);
    v12 = Event::GetStream(a1);
    v13 = *((_DWORD *)v12 + 3);
    if ( (unsigned int)(v13 + 12) <= *((_DWORD *)v12 + 2) )
    {
      v14 = (float *)(v13 + *((_DWORD *)v12 + 1));
      v36 = *v14;
      v37 = v14[1];
      v38 = v14[2];
      *((_DWORD *)v12 + 3) += 12;
    }
    v15 = *((_DWORD *)v12 + 3);
    if ( (unsigned int)(v15 + 64) <= *((_DWORD *)v12 + 2) )
    {
      qmemcpy(v39, (const void *)(v15 + *((_DWORD *)v12 + 1)), sizeof(v39));
      *((_DWORD *)v12 + 3) += 64;
    }
    v16 = *((_DWORD *)v12 + 3);
    if ( (unsigned int)(v16 + 12) <= *((_DWORD *)v12 + 2) )
    {
      v17 = (float *)(v16 + *((_DWORD *)v12 + 1));
      v33 = *v17;
      v34 = v17[1];
      v35 = v17[2];
      *((_DWORD *)v12 + 3) += 12;
    }
    v18 = *((_DWORD *)v12 + 3);
    if ( (unsigned int)(v18 + 12) <= *((_DWORD *)v12 + 2) )
    {
      v19 = (float *)(v18 + *((_DWORD *)v12 + 1));
      v30 = *v19;
      v31 = v19[1];
      v32 = v19[2];
      *((_DWORD *)v12 + 3) += 12;
    }
    v20 = *((_DWORD *)v12 + 3);
    if ( (unsigned int)(v20 + 12) <= *((_DWORD *)v12 + 2) )
    {
      v21 = (float *)(v20 + *((_DWORD *)v12 + 1));
      v27 = *v21;
      v28 = v21[1];
      v29 = v21[2];
      *((_DWORD *)v12 + 3) += 12;
    }
    GameClient::WheelVehicle::OnUpdateMoveStatus(
      Establishment,
      v24,
      v10,
      v23,
      (const struct Vector *)&v36,
      (const struct Matrix *)v39,
      (const struct Vector *)&v33,
      (const struct Vector *)&v30,
      (const struct Vector *)&v27);
  }
}
