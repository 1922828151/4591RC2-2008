/*
 * func-name: ?CreateDistortionVehicle@ControlledEstab@GameClient@@QAE_NXZ_0
 * func-address: 0x1019c740
 * callers: 0x1000f4f7
 * callees: 0x10009c19, 0x102c9d98
 */

char __thiscall GameClient::ControlledEstab::CreateDistortionVehicle(GameClient::ControlledEstab *this)
{
  char *v2; // edi
  int *v3; // eax
  int v4; // eax
  int v5; // ebp
  int v6; // ecx
  int v7; // edx
  unsigned __int8 (__thiscall *v8)(int, _BYTE *, int, int, int, _DWORD, _DWORD, float *, _DWORD, _DWORD, int, _DWORD); // edx
  void (__thiscall ***v9)(_DWORD, int); // ecx
  int v11; // [esp-4h] [ebp-A0h]
  int v12; // [esp+24h] [ebp-78h]
  int v13; // [esp+28h] [ebp-74h]
  void *v14; // [esp+34h] [ebp-68h]
  float v15[3]; // [esp+38h] [ebp-64h] BYREF
  _BYTE v16[12]; // [esp+44h] [ebp-58h] BYREF
  _BYTE v17[48]; // [esp+50h] [ebp-4Ch] BYREF
  int v18; // [esp+80h] [ebp-1Ch]
  int v19; // [esp+84h] [ebp-18h]
  int v20; // [esp+88h] [ebp-14h]
  int v21; // [esp+98h] [ebp-4h]

  if ( *((_DWORD *)this + 114) )
    return 0;
  v2 = (char *)this + 148;
  (*(void (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 12))((char *)this + 148, v17);
  v3 = (int *)(*(int (__thiscall **)(char *, _BYTE *))(*(_DWORD *)v2 + 8))((char *)this + 148, v16);
  v18 = *v3;
  v19 = v3[1];
  v20 = v3[2];
  v14 = operator new(0xC0u);
  v21 = 0;
  if ( v14 )
    v4 = sub_10009C19(v12, v13);
  else
    v4 = 0;
  v5 = *((_DWORD *)this + 125);
  v6 = *((_DWORD *)this + 115);
  v15[0] = 0.0;
  v7 = *((_DWORD *)this + 3);
  v15[1] = 0.0;
  v15[2] = 0.0;
  v11 = v7;
  *((_DWORD *)this + 114) = v4;
  v8 = *(unsigned __int8 (__thiscall **)(int, _BYTE *, int, int, int, _DWORD, _DWORD, float *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v4 + 4);
  v21 = -1;
  if ( !v8(v4, v17, v11, v6 + 824, v6 + 808, 0.0, -1.0, v15, 0.0, 0.0, v5, 0) )
  {
    v9 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 114);
    if ( v9 )
    {
      (**v9)(v9, 1);
      *((_DWORD *)this + 114) = 0;
    }
    return 0;
  }
  return 1;
}
