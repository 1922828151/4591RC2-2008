/*
 * func-name: ?GetAnimPosition@Model@@QAEMH@Z
 * func-address: 0x100f1dc0
 * callers: none
 * callees: none
 */

double __thiscall Model::GetAnimPosition(Model *this, float a2)
{
  int v3; // esi
  float v4; // ecx
  int v5; // eax
  int v7; // [esp+34h] [ebp-24h] BYREF
  _DWORD v8[8]; // [esp+38h] [ebp-20h] BYREF

  v3 = 0;
  if ( !*((_DWORD *)this + 94) )
    return 0.0;
  v4 = a2;
  if ( a2 == NAN )
    return 0.0;
  v5 = *((_DWORD *)this + 94);
  a2 = 0.0;
  v7 = 0;
  (*(void (__stdcall **)(int, float, float *))(*(_DWORD *)v5 + 44))(v5, COERCE_FLOAT(LODWORD(v4)), &a2);
  if ( a2 == 0.0 || *((int *)this + 112) <= 0 )
    return 0.0;
  while ( 1 )
  {
    (*(void (__stdcall **)(_DWORD, int, int *))(**((_DWORD **)this + 94) + 68))(*((_DWORD *)this + 94), v3, &v7);
    if ( v7 == LODWORD(a2) )
      break;
    if ( ++v3 >= *((_DWORD *)this + 112) )
      return 0.0;
  }
  if ( v3 == -1 )
    return 0.0;
  (*(void (__stdcall **)(_DWORD, int, _DWORD *))(**((_DWORD **)this + 94) + 96))(*((_DWORD *)this + 94), v3, v8);
  return (float)((double (__stdcall *)(_DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)LODWORD(a2) + 20))(
                  LODWORD(a2),
                  v8[4],
                  v8[5]);
}
