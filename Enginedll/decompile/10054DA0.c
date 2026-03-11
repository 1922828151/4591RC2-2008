/*
 * func-name: ??0BatchRenderer@@QAE@ABV0@@Z
 * func-address: 0x10054da0
 * callers: none
 * callees: none
 */

BatchRenderer *__thiscall BatchRenderer::BatchRenderer(BatchRenderer *this, const struct BatchRenderer *a2)
{
  BatchRenderer *result; // eax

  result = this;
  *(_DWORD *)this = &BatchRenderer::`vftable';
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  qmemcpy((char *)this + 12, (char *)a2 + 12, 0x40Au);
  *((_DWORD *)this + 262) = *((_DWORD *)a2 + 262);
  *((_DWORD *)this + 263) = *((_DWORD *)a2 + 263);
  *((_DWORD *)this + 264) = *((_DWORD *)a2 + 264);
  return result;
}
