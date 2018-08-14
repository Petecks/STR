#include <chrono>
#include <iostream>
#include <ctime>
#include <iomanip>

// Tarefas aperiodicas consistem em eventos em que não são considerados a
//  discrição de tempo para a realização deste.
//
// Tarefas periodicas consistem em eventos em que são considerados unidades de
// tempo bem definida para a realização.
// Ex. Timer do computador.
// Ex2. deadline relativa.
//
// Tarefas Esporádicas ocorrem um uma associação mista entre periodicas e
// nao periodicas.
// Ex. processamento de pacote network.
//
// Aspepct 1
int main(){
  auto ctm = std::chrono::system_clock::now();

  auto itim = std::chrono::system_clock::to_time_t(ctm);

  std::cout << "Time: " << std::put_time(std::localtime(&itim), "%F %F") << " \n";

  std::cout << "Seconds since epoch : " << std::chrono::duration_cast<std::chrono::seconds>(ctm.time_since_epoch()).count() << "s\n";
  return 0;
}
