package to.msn.wings.selflearn.chap09.member;

public class EnumBasic {

  public static void main(String[] args) {
	  Season.SPRING.show();
    System.out.println(Season.SPRING);
    System.out.println(Season.SPRING.toString());
    System.out.println(Season.SPRING.toSeasonValue());
  }
}
