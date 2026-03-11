/*
 * func-name: ?UpdateGlobalPRT@World@@IAEXXZ
 * func-address: 0x10117a10
 * callers: 0x10139890
 * callees: 0x10052ae0, 0x1005b610, 0x10116ff0, 0x101a2500
 */

void __thiscall World::UpdateGlobalPRT(World *this)
{
  _DWORD *Lights; // eax
  void *v3; // eax
  int v4; // eax
  int v5; // [esp-Ch] [ebp-44h]
  int v6; // [esp+Ch] [ebp-2Ch] BYREF
  void *v7; // [esp+10h] [ebp-28h]
  int v8; // [esp+14h] [ebp-24h]
  int v9; // [esp+18h] [ebp-20h]
  void *v10[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v11; // [esp+34h] [ebp-4h]

  *((_DWORD *)this + 130) = 6;
  if ( SkyController::Instance )
  {
    Lights = SkyController::GetLights((int *)SkyController::Instance, v10);
    v5 = *((_DWORD *)this + 130);
    v11 = 0;
    World::CalculatePRTSum((int)this, (char *)this + 88, v5, Lights, &unk_11241738);
    v3 = v10[1];
LABEL_9:
    if ( v3 )
      operator delete(v3);
    return;
  }
  v4 = *((_DWORD *)this + 810);
  if ( v4 && (*((_DWORD *)this + 811) - v4) >> 2 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v11 = 1;
    if ( !((*((_DWORD *)this + 811) - v4) >> 2) )
      invalid_parameter_noinfo();
    sub_10052AE0(&v6, *((int **)this + 810));
    World::CalculatePRTSum((int)this, (char *)this + 88, *((_DWORD *)this + 130), &v6, &unk_11241738);
    v3 = v7;
    goto LABEL_9;
  }
}
