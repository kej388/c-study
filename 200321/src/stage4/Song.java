package stage4;

public class Song {
	String title;
	String artist;
	int year;
	String contry;
	
	public Song() {};
	
	public Song(String title, String artist, int year, String contry) {
		this.title = title;
		this.artist = artist;
		this.year = year;
		this.contry = contry;
	}
	
	void show() {
		System.out.println(year + "년 " + contry + "국적의 " + artist + "가 부른 " + title);
	}
	
	public static void main(String[] args) {
		Song songInfo = new Song("Dancing Queen", "ABBA", 1978, "스웨덴");
		
		songInfo.show();
	}
}
