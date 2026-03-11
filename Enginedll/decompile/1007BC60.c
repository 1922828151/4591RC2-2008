/*
 * func-name: ??0CPRTMesh@@QAE@ABV0@@Z
 * func-address: 0x1007bc60
 * callers: none
 * callees: none
 */

CPRTMesh *__thiscall CPRTMesh::CPRTMesh(CPRTMesh *this, const struct CPRTMesh *a2)
{
  CPRTMesh *result; // eax

  result = this;
  *(_DWORD *)this = &CPRTMesh::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  return result;
}
