/*
 * func-name: sub_1024D350
 * func-address: 0x1024d350
 * callers: 0x10008760
 * callees: 0x100077ed, 0x10013647
 */

int __thiscall sub_1024D350(int this, Outpop::Utility::Ref_Object *a2)
{
  int result; // eax

  result = *(_DWORD *)(this + 8);
  if ( !result )
  {
    if ( !*(_BYTE *)(this + 12) )
    {
      *(_BYTE *)(this + 12) = 1;
      sub_100077ED((int)&a2, 9, 234, COERCE_INT(0.0), 1, 512);
      j_nullsub_44((int)&a2);
      if ( a2 )
        Outpop::Utility::Ref_Object::release(a2);
    }
    return 0;
  }
  return result;
}
