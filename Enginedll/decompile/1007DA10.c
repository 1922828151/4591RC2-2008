/*
 * func-name: sub_1007DA10
 * func-address: 0x1007da10
 * callers: 0x1007da10, 0x1007da70, 0x1007dcd0
 * callees: 0x1007d280, 0x1007da10, 0x1009dd90
 */

char __thiscall sub_1007DA10(_DWORD *this, ModelFrame *a2)
{
  if ( *((_DWORD *)a2 + 90) && !(unsigned __int8)sub_1007DA10(*((ModelFrame **)a2 + 90))
    || *((_DWORD *)a2 + 89) && !(unsigned __int8)sub_1007DA10(*((ModelFrame **)a2 + 89)) )
  {
    return 0;
  }
  if ( ModelFrame::GetMesh(a2, 0) )
    sub_1007D280(this, a2);
  return 1;
}
