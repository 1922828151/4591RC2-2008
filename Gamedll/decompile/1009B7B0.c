/*
 * func-name: ?Refresh@Effect_TraceLineSystem@@QAEXXZ_0
 * func-address: 0x1009b7b0
 * callers: 0x1000e7f5
 * callees: none
 */

void __thiscall Effect_TraceLineSystem::Refresh(Effect_TraceLineSystem *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  *(_DWORD *)(*((_DWORD *)this + 270) + 292) = (__int64)(255.0 * *((float *)this + 274))
                                             | (((unsigned int)(__int64)(*((float *)this + 273) * 255.0)
                                               | (((unsigned int)(__int64)(*((float *)this + 272) * 255.0)
                                                 | ((unsigned int)(__int64)(*((float *)this + 275) * 255.0) << 8)) << 8)) << 8);
  *(_DWORD *)(*((_DWORD *)this + 270) + 208) = *((_DWORD *)this + 277);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 270) + 32))(
    *((_DWORD *)this + 270),
    *((_DWORD *)this + 278));
  *(float *)(*((_DWORD *)this + 270) + 212) = (float)*((int *)this + 279);
  *(_DWORD *)(*((_DWORD *)this + 270) + 300) = *((_DWORD *)this + 280);
  *(_BYTE *)(*((_DWORD *)this + 270) + 289) = *((_BYTE *)this + 1124);
  *(float *)(*((_DWORD *)this + 270) + 228) = *((float *)this + 282);
  *(float *)(*((_DWORD *)this + 270) + 252) = *((float *)this + 283);
  *(float *)(*((_DWORD *)this + 270) + 268) = *((float *)this + 284);
  *(float *)(*((_DWORD *)this + 270) + 260) = *((float *)this + 285);
  *(float *)(*((_DWORD *)this + 270) + 264) = *((float *)this + 286);
  *(float *)(*((_DWORD *)this + 270) + 256) = *((float *)this + 287);
  *(float *)(*((_DWORD *)this + 270) + 232) = *((float *)this + 288);
  *(float *)(*((_DWORD *)this + 270) + 236) = *((float *)this + 289);
  v2 = (_DWORD *)*((_DWORD *)this + 270);
  v2[60] = *((_DWORD *)this + 290);
  v2[61] = *((_DWORD *)this + 291);
  v2[62] = *((_DWORD *)this + 292);
  v3 = (_DWORD *)*((_DWORD *)this + 270);
  v3[69] = *((_DWORD *)this + 293);
  v3[70] = *((_DWORD *)this + 294);
  v3[71] = *((_DWORD *)this + 295);
  *(_BYTE *)(*((_DWORD *)this + 270) + 304) = *((_BYTE *)this + 1192);
  *(float *)(*((_DWORD *)this + 270) + 308) = (float)*((int *)this + 299);
  *(float *)(*((_DWORD *)this + 270) + 312) = *((float *)this + 300);
  *(_BYTE *)(*((_DWORD *)this + 270) + 316) = *((_BYTE *)this + 1204);
  *(_BYTE *)(*((_DWORD *)this + 270) + 317) = *((_BYTE *)this + 1205);
  *(float *)(*((_DWORD *)this + 270) + 320) = *((float *)this + 302);
  v4 = (_DWORD *)*((_DWORD *)this + 270);
  v4[82] = *((_DWORD *)this + 303);
  v4 += 82;
  v4[1] = *((_DWORD *)this + 304);
  v4[2] = *((_DWORD *)this + 305);
  *(float *)(*((_DWORD *)this + 270) + 324) = *((float *)this + 306);
  *(_DWORD *)(*((_DWORD *)this + 270) + 340) = *((_DWORD *)this + 307);
}
