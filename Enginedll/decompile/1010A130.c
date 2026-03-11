/*
 * func-name: ?PurgeMaterial@Precacher@@SAXAAPAVMaterial@@@Z
 * func-address: 0x1010a130
 * callers: none
 * callees: 0x100e6830, 0x1010f500
 */

void __cdecl Precacher::PurgeMaterial(struct Material **a1)
{
  struct Material **i; // esi
  int v2; // ebx
  int v3; // [esp+10h] [ebp-8h] BYREF
  struct Material **v4; // [esp+14h] [ebp-4h]

  v4 = *(struct Material ***)dword_112414DC;
  for ( i = v4; i != (struct Material **)dword_112414DC && i[2] != *a1; i = (struct Material **)*i )
    ;
  v2 = dword_112414DC;
  if ( !&Precacher::m_listMaterials )
    invalid_parameter_noinfo();
  if ( i != (struct Material **)v2 )
    sub_1010F500((int)&v3, (int)&Precacher::m_listMaterials, i);
  if ( *a1 )
  {
    Material::Release(*a1);
    *a1 = 0;
  }
}
