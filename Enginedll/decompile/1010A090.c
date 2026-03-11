/*
 * func-name: ?PurgeModel@Precacher@@SAXAAPAVModel@@@Z
 * func-address: 0x1010a090
 * callers: 0x1016e550
 * callees: 0x1010f500
 */

void __cdecl Precacher::PurgeModel(struct Model **a1)
{
  struct Model **i; // esi
  int v2; // ebx
  int v3; // [esp+Ch] [ebp-8h] BYREF
  struct Model **v4; // [esp+10h] [ebp-4h]

  v4 = *(struct Model ***)dword_112414D0;
  for ( i = v4; i != (struct Model **)dword_112414D0 && i[2] != *a1; i = (struct Model **)*i )
    ;
  v2 = dword_112414D0;
  if ( !&Precacher::m_listModels )
    invalid_parameter_noinfo();
  if ( i != (struct Model **)v2 )
    sub_1010F500((int)&v3, (int)&Precacher::m_listModels, i);
  if ( *a1 )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 16))(*a1);
    if ( *a1 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*a1 + 12))(*a1, 1);
      *a1 = 0;
    }
  }
}
