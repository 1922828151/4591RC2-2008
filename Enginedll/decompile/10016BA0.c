/*
 * func-name: ??0OcclusionQuery@@QAE@ABV0@@Z
 * func-address: 0x10016ba0
 * callers: none
 * callees: none
 */

OcclusionQuery *__thiscall OcclusionQuery::OcclusionQuery(OcclusionQuery *this, const struct OcclusionQuery *a2)
{
  OcclusionQuery *result; // eax

  result = this;
  *(_DWORD *)this = &OcclusionQuery::`vftable';
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  return result;
}
