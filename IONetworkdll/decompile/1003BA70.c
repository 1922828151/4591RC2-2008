/*
 * func-name: sub_1003BA70
 * func-address: 0x1003ba70
 * callers: 0x1000e720, 0x1000f9b0, 0x100117b0, 0x10013430, 0x100147d0, 0x100292b0, 0x1002d330, 0x1002f880, 0x10031010, 0x10031810, 0x100390a0, 0x1003b8b0, 0x10042eb0, 0x100440d0, 0x10044a00, 0x100455d0
 * callees: 0x1004e870
 */

int __usercall sub_1003BA70@<eax>(_DWORD *a1@<ebx>)
{
  Outpop::Utility::Ref_Object **v1; // esi
  Outpop::Utility::Ref_Object **i; // edi
  int result; // eax

  v1 = (Outpop::Utility::Ref_Object **)a1[1];
  if ( v1 )
  {
    for ( i = (Outpop::Utility::Ref_Object **)a1[2]; v1 != i; ++v1 )
    {
      if ( *v1 )
        Outpop::Utility::Ref_Object::release(*v1);
    }
    result = operator delete(a1[1]);
  }
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return result;
}
