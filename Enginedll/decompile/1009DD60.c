/*
 * func-name: ?UseCollisionMesh@ModelFrame@@QAE_NXZ
 * func-address: 0x1009dd60
 * callers: 0x1003d0f0, 0x1007d280, 0x1011ed60, 0x1011ef20
 * callees: 0x1007ec70
 */

BOOL __thiscall ModelFrame::UseCollisionMesh(ModelFrame *this)
{
  int v2; // eax
  BOOL result; // eax

  result = 1;
  if ( !*((_BYTE *)Editor::Instance() + 2056) )
  {
    v2 = *((_DWORD *)this + 91);
    if ( !v2 || !*(_BYTE *)(v2 + 137) )
      return 0;
  }
  return result;
}
