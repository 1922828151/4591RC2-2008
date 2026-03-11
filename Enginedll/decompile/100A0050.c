/*
 * func-name: ??0FXManager@@QAE@XZ
 * func-address: 0x100a0050
 * callers: 0x100a01c0
 * callees: none
 */

FXManager *__thiscall FXManager::FXManager(FXManager *this)
{
  FXManager *result; // eax
  int v2; // edi
  int v3; // ecx
  _WORD *v4; // edx
  __int16 v5; // bx
  __int16 v6; // bp

  result = this;
  v2 = 0;
  *(_DWORD *)this = &FXManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((float *)this + 9) = 0.0;
  *((_DWORD *)this + 6) = 0;
  *((float *)this + 10) = 0.0;
  *((_DWORD *)this + 7) = 0;
  *((float *)this + 11) = 0.0;
  *((_DWORD *)this + 8) = 0;
  *((float *)this + 12) = 0.0;
  v3 = (int)&unk_102EAD32;
  *((float *)result + 13) = 0.0;
  *((float *)result + 14) = 0.0;
  *((float *)result + 15) = 0.0;
  *((float *)result + 16) = 0.0;
  *((float *)result + 17) = 0.0;
  while ( 1 )
  {
    v4 = (_WORD *)v3;
    do
    {
      v5 = 4 * v2 + 1;
      v6 = 4 * v2 + 2;
      *(v4 - 1) = 4 * v2;
      *v4 = v5;
      v4[1] = v6;
      v4[2] = v6;
      v4[3] = v5;
      v4[4] = 4 * v2++ + 3;
      v4 += 6;
    }
    while ( v2 < 1500 );
    v3 += 162110;
    if ( v3 >= 287705450 )
      break;
    v2 = 0;
  }
  return result;
}
