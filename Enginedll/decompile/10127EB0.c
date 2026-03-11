/*
 * func-name: ?GetView@ShadowEngine@@IAE?AUD3DXMATRIX@@PAVActor@@@Z
 * func-address: 0x10127eb0
 * callers: 0x10128c50
 * callees: 0x101780c8
 */

void *__stdcall ShadowEngine::GetView(void *a1, float *a2)
{
  int v2; // eax
  void *result; // eax
  float v4[3]; // [esp+0h] [ebp-Ch] BYREF

  v2 = dword_112419F4;
  if ( (dword_112419F4 & 1) == 0 )
  {
    v2 = dword_112419F4 | 1;
    dword_112419F4 |= 1u;
  }
  if ( (v2 & 2) == 0 )
  {
    flt_112419E8 = 0.0;
    dword_112419F4 = v2 | 2;
    flt_112419EC = 1.0;
    flt_112419F0 = 0.0;
  }
  v4[0] = a2[214] + flt_112418DC;
  v4[1] = a2[215] + flt_112418E0;
  v4[2] = a2[216] + flt_112418E4;
  D3DXMatrixLookAtLH(&unk_112419A8, v4, a2 + 214, &flt_112419E8);
  result = a1;
  qmemcpy(a1, &unk_112419A8, 0x40u);
  return result;
}
