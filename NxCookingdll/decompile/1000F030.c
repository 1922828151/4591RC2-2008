/*
 * func-name: sub_1000F030
 * func-address: 0x1000f030
 * callers: 0x1000f160
 * callees: 0x10013710, 0x10015530
 */

char __usercall sub_1000F030@<al>(int a1@<edi>, int a2@<esi>, int a3, int a4, int a5)
{
  unsigned __int8 v5; // bl
  unsigned __int8 v7; // al

  v5 = sub_10015530(a3, a4);
  if ( v5 == 0xFF )
    return sub_10013710(
             "Adjacencies::UpdateLink: invalid edge reference in first triangle",
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\IceAdjacencies.cpp",
             728);
  v7 = sub_10015530(a3, a4);
  if ( v7 == 0xFF )
    return sub_10013710(
             "Adjacencies::UpdateLink: invalid edge reference in second triangle",
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\IceAdjacencies.cpp",
             729);
  *(_DWORD *)(a5 + 4 * (a1 + v5 + 2 * a1)) = a2 | (v7 << 30);
  *(_DWORD *)(a5 + 4 * (a2 + v7 + 2 * a2)) = a1 | (v5 << 30);
  return 1;
}
