/*
 * func-name: sub_100183A0
 * func-address: 0x100183a0
 * callers: 0x1000d920, 0x1000fb00, 0x100126b0, 0x10023610, 0x1002e2e0
 * callees: 0x10013710
 */

char __thiscall sub_100183A0(_DWORD *this, int a2, int a3)
{
  if ( !a2 || !a3 )
    return sub_10013710(
             "MeshInterface::SetPointers: pointer is null",
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Opcode\\src\\OPC_MeshInterface.cpp",
             231);
  this[5] = a3;
  this[4] = a2;
  return 1;
}
