-- Create table for Users
CREATE TABLE Users (
    user_id INT PRIMARY KEY AUTO_INCREMENT,
    username VARCHAR(50) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL
);

-- Create table for Tickets
CREATE TABLE Tickets (
    ticket_id INT PRIMARY KEY AUTO_INCREMENT,
    user_id INT,
    subject VARCHAR(255),
    content TEXT,
    priority VARCHAR(20), -- High, Medium, Low
    status VARCHAR(20) DEFAULT 'Open',
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (user_id) REFERENCES Users(user_id)
);

-- Create table for Knowledge Base
CREATE TABLE KnowledgeBase (
    article_id INT PRIMARY KEY AUTO_INCREMENT,
    title VARCHAR(255),
    solution TEXT
);
