#include "sc_scn_tex_nrel_var_from_command.h"

ScScnTexCommandResult ScSCnTexVarNrelFromCommand::Complete(
    ScSCnCommandsHistory & history,
    ScSCnPrefixTree & tree,
    ScScnTexCommandParams const & params)
{
  std::string relation = tree.Add(params.at(0));
  std::string subject;
  if (params.at(params.size() - 2) == "[")
    subject = params.at(params.size() - 2);
  else
    subject = tree.Add(params.at(params.size() - 2));

  ScStringStream stream;
  stream << StartLine(history) << "\n" << offset << "_=> " << relation << "::";

  for (size_t param = 1; params[param] != "/"; ++param)
  {
    relation = tree.Add(params.at(param));
    stream << "\n" << offset << "    " << relation << "::";
  }
  stream << "\n" << offset << subject;
  
  return stream;
}
